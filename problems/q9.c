#include <stdio.h>

int main() {
    int a, b;

    // Basic assignment
    a = 10;
    b = 5;
    printf("Initial values: a = %d, b = %d\n\n", a, b);

    // Simple assignment (=)
    a = b;
    printf("a = b  -> a = %d\n", a);

    // Reassign values for next operations
    a = 10; b = 5;

    // Add and assign (+=)
    a += b; // a = a + b
    printf("a += b -> a = %d\n", a);

    // Subtract and assign (-=)
    a -= b; // a = a - b
    printf("a -= b -> a = %d\n", a);

    // Multiply and assign (*=)
    a *= b; // a = a * b
    printf("a *= b -> a = %d\n", a);

    // Divide and assign (/=)
    a /= b; // a = a / b
    printf("a /= b -> a = %d\n", a);

    // Modulus and assign (%=)
    a %= b; // a = a % b
    printf("a %%= b -> a = %d\n", a);

    // Bitwise AND and assign (&=)
    a = 10; b = 5;
    a &= b;
    printf("a &= b -> a = %d\n", a);

    // Bitwise OR and assign (|=)
    a = 10; b = 5;
    a |= b;
    printf("a |= b -> a = %d\n", a);

    // Bitwise XOR and assign (^=)
    a = 10; b = 5;
    a ^= b;
    printf("a ^= b -> a = %d\n", a);

    // Left shift and assign (<<=)
    a = 10; b = 1;
    a <<= b;
    printf("a <<= b -> a = %d\n", a);

    // Right shift and assign (>>=)
    a = 10; b = 1;
    a >>= b;
    printf("a >>= b -> a = %d\n", a);

    return 0;
}
