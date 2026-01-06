#include <stdio.h>
#include <string.h>
#include <string.h>
#include "stack_arrays_operations.h"

int main()
{
    struct Stack *s = (struct Stack *)malloc(sizeof(struct Stack));
    s->size = 100;
    s->top = -1;
    s->arr = (char *)malloc(s->size * sizeof(char));

    char expression[100];
    printf("Enter an expression: ");
    fgets(expression, sizeof(expression), stdin);
    int i = 0;
    while (expression[i] != '\0')
    {
        if (expression[i] == '(')
        {
            push(expression[i], s);
        }
        else if (expression[i] == ')')
        {
            if (isEmpty(s))
            {
                printf("The parenthesis isn't balanced!");
                return 0;
            }
            pop(s);
        }
        i++;
    }
    if (isEmpty(s))
    {
        printf("The parenthesis is balanced!");
    }
    else
    {
        printf("The parenthesis isn't balanced");
    }

    return 0;
}