/*
Calculate income tax paid by an employee to the government as per the slabs
mentioned below:
 Income Slab Tax
 2.5 – 5.0L 5%
 5.0L - 10.0L 20%
 Above 10.0L 30%
Note that there is no tax below 2.5L. Take income amount as an input from the user.
*/

#include <stdio.h>

int main() {
    printf("Q3: INCOME TAX CALCULATOR\n");
    float salary, tax;
    printf("Enter your salary (in lakhs): ");
    scanf("%f", &salary);
    if(salary>=2.5 && salary < 5) {
        tax = 0.05 * salary;
        printf("You owe the government: %.2f lakhs", tax);
    } else if(salary>=5 && salary < 10) {
        tax = 0.2 * salary;
        printf("You owe the government: %.2f lakhs", tax);
    } else if(salary>=10) {
        tax = 0.3 * salary;
        printf("You owe the government: %.2f lakhs", tax);
    } else {
        printf("Please recheck teh value!");
    }
    return 0;
}