#include <stdio.h>

#include "stack.h"

void initStack(Stack *stack) {
  initValueArray(&stack->array);
  growValueArray(&stack->array);
  stack->top = stack->array.values;
}

void pushStack(Stack *stack, Value value) {
  if (stack->top >= stack->array.values + stack->array.capacity) {
    int oldIndex = stack->top - stack->array.values;

    growValueArray(&stack->array);
    stack->top = stack->array.values + oldIndex;
  }

  *stack->top = value;

  stack->top++;
}

Value popStack(Stack *stack) {
  stack->top--;

  return *stack->top;
}
