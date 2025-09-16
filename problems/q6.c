#include <stdio.h>
int main()
{
    int a = 25, b = 39;
    printf("Sum is: %d\n", a+b);
    printf("difference is: %d\n", a-b);
    printf("quotient is: %d\n", a/b);
    printf("product is: %d\n", a*b);
    printf("remainder is: %d\n", a%b);
    printf("unary plus is: %d\n", +a);
    printf("unary minus is: %d\n", -a);
    printf("increment is: %d\n", ++a);
    printf("decrement is: %d\n", --a);
    return 0;
}

/*
Sum is: 64
difference is: -14
quotient is: 0
product is: 975
remainder is: 25
unary plus is: 25
unary minus is: -25
increment is: 26
decrement is: 25
*/