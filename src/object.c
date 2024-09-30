#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "memory.h"

#include "object.h"
#include "value.h"
#include "vm.h"

#include "p99-clang.h"

#define ALLOCATE_OBJ(type, objectType) \
    (type*)allocateObject(sizeof(type), objectType)

static Obj* allocateObject(size_t size, ObjType type)
{
    Obj* object = (Obj*)reallocate(NULL, 0, size);
    object->type = type;

    object->next = vm.objects;
    vm.objects = object;

    return object;
}

static ObjString* allocateString(char* chars, int length, uint32_t hash)
{
    // Contiguous memory allocation with a flexible array instead of a pointer
     ObjString* string = (ObjString*) allocateObject(
        P99_FSIZEOF(ObjString, chars, (length + 1)),
        OBJ_STRING
    );

    string->length = length;
    string->hash = hash;

    tableSet(&vm.strings, string, NIL_VAL);

    memcpy(string->chars, chars, length);
    string->chars[length] = '\0';

    return string;
}

static uint32_t hashString(const char* key, int length) {
    uint32_t hash = 2166136261u;

    for (uint32_t i = 0; i < length; i++) {
        hash ^= (uint8_t) key[i];
        hash *= 16777619;
    }

    return hash;
}

ObjString* copyString(const char* chars, int length)
{
    return takeString((char *) chars, length);
}

ObjString* takeString(char* chars, int length)
{
    uint32_t hash = hashString(chars, length);
    ObjString* interned = tableFindString(&vm.strings, chars, length, hash);

    if (interned != NULL) return interned;

    return allocateString(chars, length, hash);
}

static void printFunction(ObjFunction* function) {
    if (function->name == NULL) {
        printf("<script>");
        return;
    }

    printf("<fn %s>", function->name->chars);
}

void printObject(Value value)
{
    switch (OBJ_TYPE(value)) {
        case OBJ_STRING:
            printf("%s", AS_CSTRING(value));
            break;
        case OBJ_FUNCTION:
            printFunction(AS_FUNCTION(value));
            break;
    }
}

ObjFunction *newFunction()
{
    ObjFunction *function = ALLOCATE_OBJ(ObjFunction, OBJ_FUNCTION);
    function->arity = 0;
    function->name = NULL;

    initChunk(&function->chunk);

    return function;
}
