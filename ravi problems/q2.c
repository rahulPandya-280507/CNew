/*Write a C program to find the maximum between three numbers using if-else or nested if-else*/
#include <stdio.h>
int main(){
    int a,b,c;
    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);
    if(a>b && a>c){
        printf("%d is the maximum!",a);
    } else {
        if(b>c) {
            printf("%d is the maximum!",b);
        } else {
            printf("%d is the maximum!",c);
        }
    }
    return 0;
}