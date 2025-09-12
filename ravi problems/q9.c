/*Write a C program to input any character and check whether it is an alphabet, digit, or special character using if-else*/
#include <stdio.h>
int main() {
    char ch;
    printf("Enter any character: ");
    scanf("%c", &ch);

    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
        printf("%c is an alphabet.\n", ch);
    } 
    else if (ch >= '0' && ch <= '9') {
        printf("%c is a digit.\n", ch);
    } 
    else {
        printf("%c is a special character.\n", ch);
    }
    return 0;
}
