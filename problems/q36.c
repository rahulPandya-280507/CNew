/*
WAP FOR Student Details Using Nested Structure
*/

#include <stdio.h>

struct address
{
    int lane_no;
    char street_name[100];
};


struct student
{
    int roll;
    char name[100];
    float percentage;
    struct address a;
};


int main() {
    struct student s1;
    printf("Enter student name: ");
    scanf("%s", s1.name);
    printf("Enter student roll: ");
    scanf("%d", &s1.roll);
    printf("Enter student percentage: ");
    scanf("%f", &s1.percentage);
    printf("Enter student address lane number: ");
    scanf("%d", &s1.a.lane_no);
    printf("Enter student address street name: ");
    scanf("%s", s1.a.street_name);

    //using dot operator
    printf("Name of s1: %s\n", s1.name);
    printf("Roll number of s1: %d\n", s1.roll);
    printf("percentage of s1: %.2f\n", s1.percentage);
    printf("adress of s1: %d %s\n", s1.a.lane_no, s1.a.street_name);
    return 0;
}