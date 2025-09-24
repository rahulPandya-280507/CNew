#include <stdio.h>
int main() {
    //Q2] write a program to find out whether a student is pass or fail; if it requires total 40% and at least 33% in each subject to pass. Assume 3 subjects and take marks as input from the user.
    /*
    int sub1, sub2, sub3;
    printf("Enter marks of three subjects: ");
    scanf("%d %d %d", &sub1, &sub2, &sub3);
    float total = (sub1 + sub2 + sub3) / 3.0;
    if (total >= 40 && sub1 >= 33 && sub2 >= 33 && sub3 >= 33) {
        printf("You are passed\n");
    } else {
        printf("You are failed\n");
    }
    return 0;
    */

    //Q3] Calculate income tax paid by an employee to the government as per the slabs mentioned below:
    /*
    float salary;
    printf("Enter your salary: ");
    scanf("%f", &salary);
    if(salary <= 250000) {
        printf("No tax\n");
    } else if(salary > 250000 && salary <= 500000) {
        printf("Tax to be paid: %.2f\n", 0.05 * (salary - 250000));
    } else if(salary > 500000 && salary <= 1000000) {
        printf("Tax to be paid: %.2f\n", 0.20 * (salary - 500000) + 12500);
    } else {
        printf("Tax to be paid: %.2f\n", 0.30 * (salary - 1000000) + 112500);
    }
    return 0;
    */
    
    //Q4] write a program to find whether a year entered by the user is a leap year or not.
    /*
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);
    if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("%d is a leap year\n", year);
    } else {
        printf("%d is not a leap year\n", year);
    }
    return 0;
    */

    //Q5] Write a program to determine whether character entered by the user is lowercase or not.
    /*
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);
    if(c >= 'a' && c <= 'z') {
        printf("%c is a lowercase letter\n", c);
    } else {
        printf("%c is not a lowercase letter\n", c);
    }
    return 0;
    */
    
    //Q6] write a c program to find the greatest of four numbers entered by the user.
    /*
    int a, b, c, d;
    printf("Enter four integers: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    if(a >= b && a >= c && a >= d) {
        printf("%d is the greatest number\n", a);
    } else if(b >= a && b >= c && b >= d) {
        printf("%d is the greatest number\n", b);
    } else if(c >= a && c >= b && c >= d) {
        printf("%d is the greatest number\n", c);
    } else {
        printf("%d is the greatest number\n", d);
    }
    return 0;
    */
}