/*Temperature of a city in farenheit degrees is input through the keyboard. Write a program to convert this temperature into the centrigrade degrees*/
#include <stdio.h>
int main(){
    float temp_f, temp_d;
    printf("Enter the temperature in farenheit degrees: ");
    scanf("%f", &temp_f);
    temp_d = ((temp_f-32)*5)/9;
    printf("The temperature of %.2f farenheit is %.2f centigrade degrees", temp_f, temp_d);
}