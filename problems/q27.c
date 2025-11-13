/*
write a program to display palindrome of a given number
*/

#include <stdio.h>
int main() {
    int rev=0, digit, n, temp;
    printf("Enter a number: ");
    scanf("%d", &n);
    temp = n;
    do {
        digit = n%10;
        rev = rev*10 + digit;
        n/=10;
    } while (n!=0);
    printf("original number: %d\n", temp);
    printf("Reversed number: %d\n", rev);
    if(rev == temp) {
        printf("%d is a palindrome.", temp);
    }
    else {
        printf("%d is not a palindrome.", temp);
    }
    return 0;
}