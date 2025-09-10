/*Write a C program to display the days of the week using switch case*/
#include <stdio.h>
int main()
{
    int day;
    printf("Which day of the week do you want?: ");
    scanf("%d", &day);
    switch (day)
    {
    case 1:
        printf("Monday");
        break;
    case 2:
        printf("Tuesday");
        break;
    case 3:
        printf("Wednesday");
        break;
    case 4:
        printf("Thursday");
        break;
    case 5:
        printf("Friday");
        break;
    case 6:
        printf("Saturday");
        break;
    case 7:
        printf("Sunday");
        break;
    default:
        break;
    }
}