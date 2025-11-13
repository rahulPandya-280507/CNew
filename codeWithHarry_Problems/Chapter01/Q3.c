/*
Write a program to convert Celsius (Centigrade degrees temperature to
Fahrenheit).
*/

#include <stdio.h>

int main() {
    printf("Q3: CELCIUS TO FARENHEIT CONVERTER\n");
    float temp_c, temp_f;
    printf("Enter the temperature in celcius: ");
    scanf("%f", &temp_c);
    temp_f = ((9/5)*temp_c)+32;
    printf("%.2f celcius = %.2f farenheit\n", temp_c, temp_f);
    return 0;
}