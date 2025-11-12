/*
Write a program to check whether a number is divisible by 97 or not.
*/

#include <stdio.h>

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    (num%97 == 0)?printf("%d is divisible by 97", num):printf("%d is not divisible by 97", num);
    return 0;
}