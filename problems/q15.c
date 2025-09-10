/*Write a C program using else-if ladder to display grade based on percentage*/
#include <stdio.h>
int main()
{
    int marks;
    printf("Enter your percentage: ");
    scanf("%d", &marks);
    if(marks<40)
    {
        printf("FAIL");
    }
    else if(marks>=40 && marks<=59)
    {
        printf("PASS");
    }
    else if(marks>=60 && marks<=79)
    {
        printf("FIRST CLASS");
    }
    else if(marks>=80 && marks<=100)
    {
        printf("DISTINCTION");
    }
    else
    {
        printf("please recheck!");
    }
}