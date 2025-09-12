/*Write a C program to check whether a number is negative, positive, or zero using if-else*/
#include <stdio.h>
int main() {
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);
    if(n>0){
        printf("%d is positive!", n);
    } else if(n=0) {
        printf("%d is zero!", n);
    } else {
        printf("%d is negative!", n);
    }
    return 0;
}