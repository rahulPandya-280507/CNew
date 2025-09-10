/*Write a C program to perform size of operations*/

#include <stdio.h>
int main(){
    int i;
    char a;
    float b;
    double c;

    printf("The size of an integer in C is: %d bytes\n", sizeof(i));
    printf("The size of a character in C is: %d bytes\n", sizeof(a));
    printf("The size of a float in C is: %d bytes\n", sizeof(b));
    printf("The size of a double in C is: %d bytes\n", sizeof(c));
    return 0;
}