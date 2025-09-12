/*Write a C program to check whether a number is even or odd using if-else*/
#include <stdio.h>
int main() {
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);
    if(n%2==0) {
        printf("%d is even!", n);
    } else {
        printf("%d is odd!", n);
    }
    return 0;
}