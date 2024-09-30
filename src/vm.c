#include <stdarg.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "chunk.h"
#include "common.h"
#include "debug.h"
#include "object.h"
#include "table.h"
#include "value.h"
#include "vm.h"
#include "compiler.h"
#include "memory.h"

VM vm;

#define FRAME_LAST() ((CallFrame *) &vm.frames[vm.frameCount - 1])
#define READ_BYTE() (*FRAME_LAST()->ip++)
#define READ_CONSTANT() (FRAME_LAST()->function->chunk.constants.values[READ_BYTE()])

#define READ_CONSTANT_LONG(index, value) \
do { \
    index = READ_BYTE(); \
    index <<= 8; \
    index |= READ_BYTE(); \
    index <<= 8; \
    index |= READ_BYTE(); \
    value = FRAME_LAST()->function->chunk.constants.values[index]; \
} while (false)

static void resetStack()
{
    initValueArray(&vm.stack);
    vm.frameCount = 0;
}

static void runtimeError(const char* format, ...) {
    va_list args;

    va_start(args, format);
    vfprintf(stderr, format, args);
    va_end(args);

    fputs("\n", stderr);

    CallFrame* frame = FRAME_LAST();

    size_t instruction = frame->ip - frame->function->chunk.code - 1;
    int line = frame->function->chunk.lines.lines[instruction].line;

    fprintf(stderr, "[line %d] in script\n", line);
    resetStack();
}

void initVM()
{
    resetStack();
    vm.objects = NULL;
    initTable(&vm.strings);
    initTable(&vm.globals);
}

void freeVM()
{
    freeValueArray(&vm.stack);
    freeObjects();
    freeTable(&vm.strings);
    freeTable(&vm.globals);
}

void push(Value value)
{
    writeValueArray(&vm.stack, value);
}

static Value* top() {
    return &vm.stack.values[vm.stack.count - 1];
}

static Value peek(uint8_t distance)
{
    return top()[-distance];
}

static bool isFalsey(Value value)
{
    return IS_NIL(value) || (IS_BOOL(value) && !AS_BOOL(value));
}

Value pop()
{
    vm.stack.count--;
    return vm.stack.values[vm.stack.count];
}

static void concatenate() {
    ObjString* b = AS_STRING(pop());
    ObjString* a = AS_STRING(pop());
    int length = a->length + b->length;

    // Lazy to upgrade this, I could just allocateString with the right size
    // then memcpy directly a and b within.
    char* chars = ALLOCATE(char, length + 1);
    
    memcpy(chars, a->chars, a->length);
    memcpy(chars + a->length, b->chars, b->length);
   
    chars[length] = '\0';
    ObjString* result = takeString(chars, length);

    FREE_ARRAY(char, chars, length + 1);
    push(OBJ_VAL(result));
}

inline static bool readConstant(Value *dest)
{
    Value value;
    uint32_t index;

    switch (READ_BYTE()) {
        case OP_CONSTANT: {
            value = READ_CONSTANT();
            break;
        }
        case OP_CONSTANT_LONG: {
            READ_CONSTANT_LONG(index, value);
            break;
        }
        default:
            runtimeError("Unable to read constant kind.");
            return false;
    }

    *dest = value;

    return true;
}

static InterpretResult run()
{
    CallFrame* frame = FRAME_LAST();

#define READ_SHORT() \
    (frame->ip += 2, (uint16_t)((frame->ip[-2] << 8) | frame->ip[-1]))
#define BINARY_OP(valueType, op) \
do { \
    if (!IS_NUMBER(peek(0)) || !IS_NUMBER(peek(1))) { \
        runtimeError("Operands must be numbers."); \
        return INTERPRET_RUNTIME_ERROR; \
    } \
    double b = AS_NUMBER(pop()); \
    double a = AS_NUMBER(pop()); \
    push(valueType(a op b)); \
} while (false)

    for (;;) {
#ifdef DEBUG_TRACE_EXECUTION
    printf(" ");
    for (uint32_t i = 0; i < vm.stack.count; i++) {
        printf("[ ");
        printValue(vm.stack.values[i]);
        printf(" ]");
    }
    printf("\n");
    
    disassembleInstruction(&frame->function->chunk,
        (int)(frame->ip - frame->function->chunk.code));
#endif
        uint8_t instruction;

        switch (instruction = READ_BYTE()) {
            case OP_RETURN: {
                return INTERPRET_OK;
            }
            case OP_JUMP_IF_FALSE: {
                uint16_t offset = READ_SHORT();
            
                if (isFalsey(peek(0))) frame->ip += offset;
                break;
            }
            case OP_JUMP: {
                uint16_t offset = READ_SHORT();
            
                frame->ip += offset;
                break;
            }
            case OP_LOOP: {
                uint16_t offset = READ_SHORT();

                frame->ip -= offset;
                break;
            }
            case OP_PRINT: {
                printValue(pop());
                printf("\n");
                break;
            }
            case OP_CONSTANT: {
                Value constant = READ_CONSTANT();

                push(constant);
                break;
            }
            case OP_CONSTANT_LONG: {
                uint32_t index;
                Value constant;

                READ_CONSTANT_LONG(index, constant);
                push(constant);

                break;
            }
            case OP_NIL: push(NIL_VAL); break;
            case OP_POP: pop(); break;
            case OP_GET_LOCAL: {
                uint8_t slot = READ_BYTE();

                push(frame->slots[slot]);
                break;
            }
            case OP_SET_LOCAL: {
                uint8_t slot = READ_BYTE();

                frame->slots[slot] = peek(0);
                break;
            }
            case OP_SET_GLOBAL: {
                Value value;
                if (!readConstant(&value)) {
                    return INTERPRET_RUNTIME_ERROR;
                }

                ObjString* name = AS_STRING(value);
    
                if (tableSet(&vm.globals, name, peek(0))) {
                    tableDelete(&vm.globals, name);
                    runtimeError("Undefined variable '%s'.", name->chars);

                    return INTERPRET_RUNTIME_ERROR;
                }

                break;
            }
            case OP_GET_GLOBAL: {
                Value value;
                if (!readConstant(&value)) {
                    return INTERPRET_RUNTIME_ERROR;
                }

                ObjString* name = AS_STRING(value);

                if (!tableGet(&vm.globals, name, &value)) {
                    runtimeError("Undefined variable '%s'.", name->chars);
                    return INTERPRET_RUNTIME_ERROR;
                }

                push(value);
                break;
            }
            case OP_DEFINE_GLOBAL: {
                Value value;
                if (!readConstant(&value)) {
                    return INTERPRET_RUNTIME_ERROR;
                }

                ObjString* name = AS_STRING(value);
                tableSet(&vm.globals, name, peek(0));
                pop();

                break;
            }
            case OP_TRUE: push(BOOL_VAL(true)); break;
            case OP_FALSE: push(BOOL_VAL(false)); break;
            case OP_ADD: {
                if (IS_NUMBER(peek(0)) && IS_NUMBER(peek(1))) {
                    double b = AS_NUMBER(pop());
                    double a = AS_NUMBER(pop());
    
                    push(NUMBER_VAL(a + b));
                } else if (IS_STRING(peek(0)) && IS_STRING(peek(1))) {
                    concatenate();
                } else {
                    runtimeError("Operands must be two numbers or two strings.");
                    return INTERPRET_RUNTIME_ERROR;
                }
                break;
            }
            case OP_SUBTRACT: BINARY_OP(NUMBER_VAL, -); break;
            case OP_MULTIPLY: BINARY_OP(NUMBER_VAL, *); break;
            case OP_DIVIDE: BINARY_OP(NUMBER_VAL, /); break;
            case OP_EQUAL: {
                Value b = pop();
                Value a = pop();
                push(BOOL_VAL(valuesEqual(a, b)));
                break;
            }
            case OP_GREATER: BINARY_OP(BOOL_VAL, >); break;
            case OP_LESS: BINARY_OP(BOOL_VAL, <); break;
            case OP_NOT:
                push(BOOL_VAL(isFalsey(pop())));
                break;
            case OP_NEGATE: {
                if (!IS_NUMBER(peek(0))) {
                    runtimeError("Operand must be a number.");
                    return INTERPRET_RUNTIME_ERROR;
                }

                AS_NUMBER(*top()) = -AS_NUMBER(*top());
                break;
            }
        }
    }

#undef BINARY_OP
#undef READ_SHORT
}

InterpretResult interpret(const char* source)
{
    ObjFunction *function = compile(source);

    if (function == NULL) return INTERPRET_COMPILE_ERROR;

    push(OBJ_VAL(function));

    CallFrame* frame = &vm.frames[vm.frameCount++];
    frame->function = function;
    frame->ip = function->chunk.code;
    frame->slots = vm.stack.values;

    return run();
}