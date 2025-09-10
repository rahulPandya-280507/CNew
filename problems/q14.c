/*Write a C program to classify marks as: fail(<40), pass(40-59), first class(60-79), distinction(80+)*/

#include <stdio.h>

int main()
{
    int marks;
    printf("Enter your marks: ");
    scanf("%d", &marks);
    if(marks<40)
    {
        printf("FAIL");
    }
    else
    {
        if(marks>=40 && marks<=59)
        {
            printf("PASS");
        }
        else
        {
            if(marks>=60 && marks<=79)
            {
                printf("FIRST CLASS");
            }
            else
            {
                if(marks>=80 && marks<=100)
                {
                    printf("DISTINCTION");
                }
            }
        }
    }
}