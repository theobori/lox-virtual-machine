#ifndef __CLOX_CHUNK_H__
#define __CLOX_CHUNK_H__

#include "common.h"
#include "line.h"
#include "value.h"

#define CONSTANTS_MAX 0xffffff

typedef enum {
  OP_RETURN,
  OP_DEFINE_GLOBAL,
  OP_GET_GLOBAL,
  OP_SET_GLOBAL,
  OP_GET_LOCAL,
  OP_SET_LOCAL,
  OP_PRINT,
  OP_NEGATE,
  OP_ADD,
  OP_SUBTRACT,
  OP_MULTIPLY,
  OP_DIVIDE,
  OP_CONSTANT,      // for 8 bits constants
  OP_CONSTANT_LONG, // for 24 bits constants
  OP_NIL,
  OP_TRUE,
  OP_FALSE,
  OP_NOT,
  OP_POP,
  OP_EQUAL,
  OP_GREATER,
  OP_LESS,
  OP_JUMP_IF_FALSE,
  OP_JUMP,
  OP_LOOP,
  OP_CALL,
} OpCode;

typedef struct {
  int count;
  int capacity;
  uint8_t *code;
  LineArray lines;
  ValueArray constants;
} Chunk;

void initChunk(Chunk *chunk);
void writeChunk(Chunk *chunk, uint8_t byte, int line);
void freeChunk(Chunk *chunk);

bool writeConstant(Chunk *chunk, Value value, int line);
uint32_t addConstant(Chunk *chunk, Value value);

#endif
