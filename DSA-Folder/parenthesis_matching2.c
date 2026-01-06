#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "stack_arrays_operations.h"

int match(char a, char b);

int main()
{
    struct Stack *s = (struct Stack *)malloc(sizeof(struct Stack));
    s->size = 100;
    s->top = -1;
    s->arr = (char *)malloc(s->size * sizeof(char));

    char expression[100], popped_ch;
    printf("Enter an expression: ");
    fgets(expression, sizeof(expression), stdin);
    int i = 0;
    while (expression[i] != '\0')
    {
        if (expression[i] == '(' || expression[i] == '[' || expression[i] == '{')
        {
            push(expression[i], s);
        }
        else if (expression[i] == ')' || expression[i] == ']' || expression[i] == '}')
        {
            if (isEmpty(s))
            {
                printf("The parenthesis isn't balanced!");
                return 0;
            }
            popped_ch = pop(s);
            if (!match(popped_ch, expression[i]))
            {
                printf("The parenthesis isn't balanced!");
                return 0;
            }
        }
        i++;
    }
    if (isEmpty(s))
    {
        printf("The parenthesis is balanced!");
    }
    else
    {
        printf("The parenthesis isn't balanced!");
    }

    return 0;
}

int match(char a, char b)
{
    if (a == '(' && b == ')')
    {
        return 1;
    }
    if (a == '[' && b == ']')
    {
        return 1;
    }
    if (a == '{' && b == '}')
    {
        return 1;
    }
    return 0;
}