#include <stdio.h>
int main()
{
    int a,b,difference,product,quotient,remainder;
    float percentage,c,d;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Enter two decimal numbers: ");
    scanf("%f %f", &c, &d);
    difference = a - b;
    printf("The difference of %d and %d is: %d\n", a, b, difference);
    product = a * b;
    printf("The product of %d and %d is: %d\n", a, b, product);
    quotient = a / b;
    printf("The quotient of %d and %d is: %d\n", a, b, quotient);
    remainder = a % b;
    printf("The remainder of %d and %d is: %d\n", a, b, remainder);
    percentage = (c/d)*100;
    printf("The remainder of %.2f and %.2f is: %.2f%%\n", c,d, percentage);
    return 0;
}

/*
Enter two numbers: 2 3
Enter two decimal numbers: 5.6 2.3
The difference of 2 and 3 is: -1
The product of 2 and 3 is: 6
The quotient of 2 and 3 is: 0
The remainder of 2 and 3 is: 2
The remainder of 5.60 and 2.30 is: 243.48%
*/