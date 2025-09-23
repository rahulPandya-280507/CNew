#include <stdio.h>
int main() {

    //Q1] write a C program to calculate area of a rectangle
    //(a) using hard coded inputs
    /*
    int a = 20, b = 10, area;
    area = a*b;
    printf("%d", area);
    */
    //(b) using user inputs
    /*
    int a,b,area;
    printf("Enter the length and breadth os the reactangle: ");
    scanf("%d %d", &a, &b);
    area = a*b;
    printf("%d is the area.", area);
    */
    
    //Q2] Calculate the area of a circle and mosify the same program to calculate the volume of a cylinder given its radius and height.
    /*
    float rad, area, height, volume;
    printf("Enter the radius: ");
    scanf("%f", &rad);
    area = 3.14 * rad * rad;
    printf("Enter the height of the cylinder: ");
    scanf("%f", &height);
    volume = area * height;
    printf("The area of the circle is: %.2f square units\nThe volume is: %.2f cubic units", area, volume);
    */
    

    //Q3] convert celcius to farenheit
    /*
    float temp_c, temp_f;
    printf("Enter the temperature in celcius: ");
    scanf("%f", &temp_c);
    temp_f = ((9/5)*temp_c) + 32;
    printf("The temperature in farenheit is: %.2f F", temp_f);
    */

    //Q4] write a program to calculate the simple interest for a set of values representing principal amount, no. of years and rate of interest.
    /*
    float principal_amount, rate;
    int no_years;
    printf("Enter the principal amount, the rate of interest and the number of years for the loan: ");
    scanf("%f %f %d", &principal_amount, &rate, &no_years);
    float simple_interest;
    simple_interest = (principal_amount*rate*no_years)/100;
    printf("The simple interest is: %.2f", simple_interest);
    */
    return 0;
}
    