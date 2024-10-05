#ifndef __CLOX_COMPILER_H__
#define __CLOX_COMPILER_H__

#include "chunk.h"
#include "object.h"
#include "scanner.h"

typedef struct {
  Token previous;
  Token current;
  bool hadError;
  bool panicMode;
} Parser;

ObjFunction *compile(const char *source);

#endif
