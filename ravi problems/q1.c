/*Write a C program to find the maximum between two numbers using if-else*/
#include <stdio.h>
int main(){
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    if(a>b){
        printf("%d is the maximum!", a);
    } else {
        printf("%d is the maximum!", b);
    }
    return 0;
}