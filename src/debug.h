#ifndef __CLOX_DEBUG_H__
#define __CLOX_DEBUG_H__

#include "chunk.h"
#include <stdint.h>

void disassembleChunk(Chunk* chunk, const char* name);
uint32_t disassembleInstruction(Chunk* chunk, uint32_t offset);

#endif
