#include <stdio.h>

int main() {
    int a, b;

    // Input values
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    // Equal to
    if (a == b)
        printf("%d == %d is true\n", a, b);
    else
        printf("%d == %d is false\n", a, b);

    // Not equal to
    if (a != b)
        printf("%d != %d is true\n", a, b);
    else
        printf("%d != %d is false\n", a, b);

    // Greater than
    if (a > b)
        printf("%d > %d is true\n", a, b);
    else
        printf("%d > %d is false\n", a, b);

    // Less than
    if (a < b)
        printf("%d < %d is true\n", a, b);
    else
        printf("%d < %d is false\n", a, b);

    // Greater than or equal to
    if (a >= b)
        printf("%d >= %d is true\n", a, b);
    else
        printf("%d >= %d is false\n", a, b);

    // Less than or equal to
    if (a <= b)
        printf("%d <= %d is true\n", a, b);
    else
        printf("%d <= %d is false\n", a, b);

    return 0;
}
