#include <stdio.h>

int main() {
    int a, b;

    // Input values
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    // Bitwise AND
    printf("%d & %d = %d\n", a, b, a & b);

    // Bitwise OR
    printf("%d | %d = %d\n", a, b, a | b);

    // Bitwise XOR
    printf("%d ^ %d = %d\n", a, b, a ^ b);

    // Bitwise NOT (Unary)
    printf("~%d = %d\n", a, ~a);
    printf("~%d = %d\n", b, ~b);

    // Left Shift
    printf("%d << 1 = %d\n", a, a << 1);
    printf("%d << 1 = %d\n", b, b << 1);

    // Right Shift
    printf("%d >> 1 = %d\n", a, a >> 1);
    printf("%d >> 1 = %d\n", b, b >> 1);

    return 0;
}

/*
Enter two integers: 2 3
2 & 3 = 2
2 | 3 = 3
2 ^ 3 = 1
~2 = -3
~3 = -4
2 << 1 = 4
3 << 1 = 6
2 >> 1 = 1
3 >> 1 = 1
PS D:\C\probl
*/