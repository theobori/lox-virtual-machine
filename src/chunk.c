#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>

#include "chunk.h"
#include "line.h"
#include "memory.h"
#include "value.h"

void initChunk(Chunk *chunk)
{
    chunk->capacity = 0;
    chunk->count = 0;
    chunk->code = NULL;
    
    initLineArray(&chunk->lines);
    initValueArray(&chunk->constants);
}

static void writeLine(Chunk *chunk, int line)
{
    Line newLine = {line, 1};

    if (chunk->lines.count <= 0)  {
        writeLineArray(&chunk->lines, newLine);
        return;
    }

    if (chunk->lines.lines[chunk->lines.count - 1].line == line) {
        chunk->lines.lines[chunk->lines.count - 1].amount++;
    } else {
        writeLineArray(&chunk->lines, newLine);
    }
}

void writeChunk(Chunk *chunk, uint8_t byte, int line)
{
    if (chunk->capacity <= chunk->count) {
        int oldCapacity = chunk->capacity;

        chunk->capacity = GROW_CAPACITY(oldCapacity);
        chunk->code = GROW_ARRAY(uint8_t, chunk->code,
            oldCapacity, chunk->capacity);
    }
  
    chunk->code[chunk->count] = byte;
    chunk->count++;

    writeLine(chunk, line);
}

void freeChunk(Chunk *chunk)
{
    FREE_ARRAY(uint8_t, chunk->code, chunk->capacity);
    freeValueArray(&chunk->constants);
    freeLineArray(&chunk->lines);

    initChunk(chunk);
}

bool writeConstant(Chunk* chunk, Value value, int line)
{
    // Check if the index will be higher than 24 bits
    if (chunk->constants.count > CONSTANTS_MAX) {
        return false;
    }

    uint32_t constant = addConstant(chunk, value);

    // Write the index on 8 bits
    if (chunk->constants.count <= 256) {
        writeChunk(chunk, OP_CONSTANT, line);
        writeChunk(chunk, constant, line);

        return true;
    }

    // Write the index on 24 bits
    writeChunk(chunk, OP_CONSTANT_LONG, line);
    writeChunk(chunk, (constant >> 16) & 0xff, line);
    writeChunk(chunk, (constant >> 8) & 0xff, line);
    writeChunk(chunk, constant & 0xff, line);

    return true;
}

uint32_t addConstant(Chunk *chunk, Value value)
{
    writeValueArray(&chunk->constants, value);

    return chunk->constants.count - 1;
}
