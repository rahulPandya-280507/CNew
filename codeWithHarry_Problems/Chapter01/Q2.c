/*
Calculate the area of a circle and modify the same program to calculate the
volume of a cylinder given its radius and height.
*/

#include <stdio.h>
#include <math.h>

int main() {
    printf("\nQ2: AREA OF CIRCLE AND VOLUME OF CYLINDER\n");
    printf("\nA:Area of circle:\n");
    float radius, area;
    printf("Enter radius: ");
    scanf("%f", &radius);
    area = 3.14 * pow(radius, 2);
    printf("The area of a circle with radius: %.2f units is: %.2f square units\n", radius, area);
    printf("\nB:Volume of cylinder:\n");
    float height, volume;
    printf("Enter height: ");
    scanf("%f", &height);
    volume = area*height;
    printf("The volume of cylinder with radius: %.2f units and height: %.2f is: %.2f cubic units\n", radius, height, volume);
    return 0;
}