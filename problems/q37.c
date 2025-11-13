/*
Create and Display Student Details IN STRUCTURE
*/

#include <stdio.h>

struct student
{
    int roll;
    char name[100];
    float percentage;
};


int main() {
    struct student s1;
    printf("Enter student name: ");
    scanf("%s", s1.name);
    printf("Enter student roll: ");
    scanf("%d", &s1.roll);
    printf("Enter student percentage: ");
    scanf("%f", &s1.percentage);

    //using dot operator
    printf("Name of s1: %s\n", s1.name);
    printf("Roll number of s1: %d\n", s1.roll);
    printf("percentage of s1: %.2f\n", s1.percentage);
}