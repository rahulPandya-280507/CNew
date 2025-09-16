/*Write a C program to find the area of the circle*/
#include <stdio.h>
int main()
{
    float rad,area;
    printf("Enter the radius of the circle you want to find the area of: ");
    scanf("%f", &rad);
    area = 3.14*rad*rad;
    printf("The area of the circle of radius %.2f units is: %.2f sq. units", rad, area);
    return 0;
}

/*
Enter the radius of the circle you want to find the area of: 25
The area of the circle of radius 25.00 units is: 1962.50 sq. units
*/