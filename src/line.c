#include "line.h"
#include "memory.h"
#include <stdint.h>
#include <stdio.h>

void initLineArray(LineArray *array) {
  array->lines = NULL;
  array->capacity = 0;
  array->count = 0;
}

void writeLineArray(LineArray *array, Line line) {
  if (array->capacity <= array->count) {
    int oldCapacity = array->capacity;

    array->capacity = GROW_CAPACITY(oldCapacity);
    array->lines = GROW_ARRAY(Line, array->lines, oldCapacity, array->capacity);
  }

  array->lines[array->count] = line;
  array->count++;
}

void freeLineArray(LineArray *array) {
  FREE_ARRAY(Line, array->lines, array->capacity);
  initLineArray(array);
}

int getLine(LineArray *array, int instructionIndex) {
  if (array == NULL) {
    return -1;
  }

  Line line;

  for (uint32_t i = 0, instructionCount = 0; i < array->count; i++) {
    line = array->lines[i];

    if (instructionCount + line.amount > instructionIndex) {
      return line.line;
    }

    instructionCount += line.amount;
  }

  return -1;
}
