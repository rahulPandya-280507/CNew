/*
wacp to call by value
*/

int product(int, int);

#include <stdio.h>
int main() {
    int a,b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    int sum = product(a,b);
    printf("The product of %d and %d is: %d", a, b, sum);
    return 0;
}

int product(int x, int y) {
    return x * y;
}