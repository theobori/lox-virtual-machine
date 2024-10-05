#ifndef __CLOX_STACK_H__
#define __CLOX_STACK_H__

#include "value.h"

typedef struct {
  ValueArray array;
  Value *top;
} Stack;

void initStack(Stack *stack);
void pushStack(Stack *stack, Value value);
Value popStack(Stack *stack);

#endif
