/*
Write a program to determine whether a character entered by the user is
lowercase or not.
*/

#include <stdio.h>

int main() {
    printf("Q5: CASE CHECKER\n");
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);
    int a = (int)c;
    if(a>=65 && a<=90) {
        printf("%c is in uppercase!", c);
    } else {
        printf("%c is in lowercase!", c);
    }
    return 0;
}