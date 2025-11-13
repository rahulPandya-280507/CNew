/*
wacp for functions in C with arguments and return types
*/

int add(int, int);

#include <stdio.h>
int main() {
    int a,b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    int sum = add(a,b);
    printf("The sum of %d and %d is: %d", a, b, sum);
    return 0;
}

int add(int x, int y) {
    return x + y;
}