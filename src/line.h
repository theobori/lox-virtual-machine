#ifndef __CLOX_LINE_H__
#define __CLOX_LINE_H__

#include "common.h"
#include <stdint.h>

typedef struct {
  uint32_t line;
  uint16_t amount;
} Line;

typedef struct {
  int capacity;
  int count;
  Line *lines;
} LineArray;

void initLineArray(LineArray *array);
void writeLineArray(LineArray *array, Line line);
void freeLineArray(LineArray *array);
int getLine(LineArray *array, int instructionIndex);

#endif