#include "stack_arrays_operations.h"

int isEmpty(struct Stack *s) {
    return s->top == -1;
}

int isFull(struct Stack *s) {
    return s->top == s->size - 1;
}

void push(int value, struct Stack *s) {
    if (isFull(s)) {
        printf("Stack Overflow\n");
    } else {
        s->arr[++s->top] = value;
    }
}

int pop(struct Stack *s) {
    if (isEmpty(s)) {
        printf("Stack Underflow\n");
        return -1;
    }
    return s->arr[s->top--];
}

int peek(struct Stack *s, int index) {
    int arrayInd = s->top - index + 1;
    if (arrayInd < 0) {
        printf("Not a valid position\n");
        return -1;
    }
    return s->arr[arrayInd];
}

int stackTop(struct Stack *s) {
    return s->arr[s->top];
}

int stackBottom(struct Stack *s) {
    return s->arr[0];
}
