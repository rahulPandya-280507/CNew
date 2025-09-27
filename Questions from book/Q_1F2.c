/*The lenght and breadth of a rectangle and radius of a circle are input through the keyboard. Write a program to calculate the area and perimeter of the rectangle, and the area and circumference of the circle*/
#include <stdio.h>
int main(){
    float length, breadth, radius, a_r, a_c, p_r, p_c;
    printf("Enter the length and breadth of the rectangle: ");
    scanf("%f %f", &length, &breadth);
    a_r = length*breadth;
    p_r = 2*(length + breadth);
    printf("The area and perimeter of the rectangle with the lenght = %.2f units and breadth = %.2f units are: %.2f units^2 and %.2f units \n", length, breadth, a_r, p_r);
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    a_c = 3.14*radius*radius;
    p_c = 2*3.14*radius;
    printf("The area and circumference of the circle with the radius as %.2f units are: %.2f units^2 and %.2f units \n", radius, a_c, p_c);
}