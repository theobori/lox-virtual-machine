#ifndef __CLOX_COMPILER_H__
#define __CLOX_COMPILER_H__

#include "chunk.h"
#include "scanner.h"
#include "object.h"

typedef struct {
    Token previous;
    Token current;
    bool hadError;
    bool panicMode;
} Parser;

ObjFunction* compile(const char* source);

#endif
