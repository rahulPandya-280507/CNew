#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "stack_arrays_operations.h"

int isOperator(char ch);
int prec(char ch);
char* inToPo(char *infix);

int main() {
    char infix[100];

    printf("Enter an expression: ");
    fgets(infix, sizeof(infix), stdin);

    // remove newline
    infix[strcspn(infix, "\n")] = '\0';

    char *postfix = inToPo(infix);
    printf("Postfix expression: %s\n", postfix);

    free(postfix);
    return 0;
}

char* inToPo(char *infix) {
    struct Stack *sp = (struct Stack*) malloc(sizeof(struct Stack));
    sp->size = 100;
    sp->top = -1;
    sp->arr = (char*) malloc(sp->size * sizeof(char));

    char *pos = (char*) malloc((strlen(infix) + 1) * sizeof(char));

    int i = 0, j = 0;

    while (infix[i] != '\0') {
        if (!isOperator(infix[i])) {
            pos[j++] = infix[i++];
        } 
        else {
            if (isEmpty(sp) || prec(infix[i]) > prec(sp->arr[sp->top])) {
                push(infix[i++], sp);
            } else {
                pos[j++] = pop(sp);
            }
        }
    }

    while (!isEmpty(sp)) {
        pos[j++] = pop(sp);
    }

    pos[j] = '\0';
    return pos;
}

int prec(char ch) {
    if (ch == '*' || ch == '/') return 3;
    if (ch == '+' || ch == '-') return 2;
    return 0;
}

int isOperator(char ch) {
    return (ch == '+' || ch == '-' || ch == '*' || ch == '/');
}
