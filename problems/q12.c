/*Write a C program to check if a person's age is greater than or equal to 18 (eligible to vote) only using if statement.*/

#include <stdio.h>

int main()
{
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    if(age>=18)
        printf("You are eligible to vote!");
    return 0;
}

/*
Enter your age: 24
You are eligible to vote!
*/