#include <stdlib.h>

#include "memory.h"

void* reallocate(void* pointer, size_t oldSize, size_t newSize)
{
    if (newSize == 0) {
        free(pointer);

        return NULL;
    }

    void* result = realloc(pointer, newSize);

    if (result == NULL) {
        exit(1);
    }

    return result;
}

static void freeObject(Obj* object) {
    switch (object->type) {
        case OBJ_STRING: {
            ObjString* string = (ObjString*)object;
            free(string);
            break;
        }
        case OBJ_FUNCTION: {
            ObjFunction* function = (ObjFunction*)object;
            freeChunk(&function->chunk);
            FREE(ObjFunction, object);
            break;
        }
    }
}

void freeObjects()
{
    Obj *curr = vm.objects;
    Obj *previous = NULL;

    while (curr != NULL) {
        previous = curr;
        curr = curr->next;
        freeObject(previous);
    }
}
