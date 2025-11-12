/*
Write a program to find greatest of four numbers entered by the user.
*/

#include <stdio.h>

int main() {
    int a,b,c,d;
    printf("Enter 4 integers: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    if(a>=b && a>=c && a>=d) { 
        printf("%d is the largest!", a);
    } else if(b>=c && b>=d) {
        printf("%d is the largest!", b);
    } else if(c>=d) {
        printf("%d is the largest!", c);
    } else {
        printf("%d is the largest!", d);
    }
    return 0;
}