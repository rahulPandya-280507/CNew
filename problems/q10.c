#include <stdio.h>

int main() {
    int a, b;

    // Input values
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    // Logical AND
    printf("(%d && %d) = %d\n", a, b, (a && b));

    // Logical OR
    printf("(%d || %d) = %d\n", a, b, (a || b));

    // Logical NOT
    printf("!(%d) = %d\n", a, !a);
    printf("!(%d) = %d\n", b, !b);

    return 0;
}

/*
Enter two integers: 2 3
(2 && 3) = 1
(2 || 3) = 1
!(2) = 0
!(3) = 0
*/