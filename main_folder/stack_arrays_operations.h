#ifndef STACK_ARRAY_OPERATIONS_H
#define STACK_ARRAY_OPERATIONS_H

#include <stdio.h>
#include <stdlib.h>

struct Stack {
    int top;
    int size;
    char *arr;
};

/* Function declarations */
int isEmpty(struct Stack *s);
int isFull(struct Stack *s);
void push(int value, struct Stack *s);
int pop(struct Stack *s);
int peek(struct Stack *s, int index);
int stackTop(struct Stack *s);
int stackBottom(struct Stack *s);

#endif
