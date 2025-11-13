/*
Write a program to determine whether a student has passed or failed. To pass, a
student requires a total of 40% and at least 33% in each subject. Assume there
are three subjects and take the marks as input from the user.
*/

#include <stdio.h>

int main() {
    printf("Q2: PASS/FAIL\n");
    int marks1, marks2, marks3;
    printf("Enter the marks of three subjects (out of 100): ");
    scanf("%d %d %d", &marks1, &marks2, &marks3);
    float avg;
    avg = (marks1 + marks2 + marks3)/3;
    if(marks1>=33 && marks2>=33 && marks3>=33 && avg>=40) {
        printf("You have passed!");
    } else {
        printf("You have failed!");
    }
    return 0;
}