/*
Write a C program to calculate area of a rectangle:
a. Using hard coded inputs.
b. Using inputs supplied by the user
*/
#include <stdio.h>

int main() {
    //a - using hard coded inputs
    printf("Q1: AREA OF RECTANGLE\n");
    printf("\nA: HARD CODED INPUTS\n");
    int length = 10, breadth = 2, area;
    area = length * breadth;
    printf("\nThe area of a rectangle with length: %d units and breadth: %d units is: %d square units\n", length, breadth, area);
    //b - using inputs supplied by the user
    printf("\nB: USER SUPPLIED INPUTS\n\n");
    printf("Enter the length: ");
    scanf("%d", &length);
    printf("Enter the breadth: ");
    scanf("%d", &breadth);
    area = length * breadth;
    printf("The area of a rectangle with length: %d units and breadth: %d units is: %d square units\n", length, breadth, area);
    return 0;
}