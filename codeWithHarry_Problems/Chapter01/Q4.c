/*
Write a program to calculate simple interest for a set of values representing
principal, number of years and rate of interest
*/

#include <stdio.h>

int main() {
    printf("Q4: SIMPLE INTEREST CALCULATOR\n");
    float principal_amount, rate_of_interest, simple_interest;
    int time_yrs;
    printf("Enter the principal amount: ");
    scanf("%f", &principal_amount);
    printf("Enter the rate of interest: ");
    scanf("%f", &rate_of_interest);
    printf("Enter the time (in years): ");
    scanf("%d", &time_yrs);
    simple_interest = (principal_amount*rate_of_interest*time_yrs)/100;
    printf("The Simple Interest for the given arguments is: %.2f", simple_interest);
    return 0;
}