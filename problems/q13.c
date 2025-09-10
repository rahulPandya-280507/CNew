/*Write a program in C to find the maximum of two numbers using only IF statement*/
#include <stdio.h>

int main()
{
    int a,b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    if(a>b)
    {
        printf("%d is greater than %d", a,b);
    }
    return 0;
}