/*
wacp to check if a word is a palindrome
*/

#include <stdio.h>
int main() {
    char str[100], rev[100];
    int i, j, len = 0;
    printf("Enter a word: ");
    scanf("%s", str);
    while(str[len]!='\0') {
        len++;
    }
    for(i =0, j=len-1; i<len; i++, j--) {
        rev[i] = str[j];
    }
    rev[i] = '\0';
    int isPalindrome = 1;
    for(i = 0; i<len; i++) {
        if(str[i]!=rev[i]) {
            isPalindrome = 0;
            break;
        }
    }
    printf("Reversed String: %s\n", rev);
    if(isPalindrome) {
        printf("The string is a palindrome!");
    } 
    else {
        printf("The string is not a palindrome!");
    }
    return 0;
}