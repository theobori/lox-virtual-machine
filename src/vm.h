#ifndef __CLOX_VM_H__
#define __CLOX_VM_H__

#include "chunk.h"
#include "table.h"
#include "value.h"
#include "object.h"

#define FRAMES_MAX 64
#define STACK_MAX (FRAMES_MAX * UINT8_COUNT)

typedef struct {
    ObjFunction* function;
    uint8_t* ip;
    Value* slots;
} CallFrame;

typedef struct {
    // function frames
    CallFrame frames[FRAMES_MAX];
    // amount of frames
    int frameCount;
    // stack
    ValueArray stack;
    // gc
    struct Obj* objects;
    // intern strings
    Table strings;
    // global vars
    Table globals;
} VM;

extern VM vm;

void initVM();
void freeVM();

void push(Value value);
Value pop();

typedef enum {
    INTERPRET_OK,
    INTERPRET_COMPILE_ERROR,
    INTERPRET_RUNTIME_ERROR
} InterpretResult;

InterpretResult interpret(const char* source);

#endif
