/*While purchasing certain items, a discount of 10%
is offered if the quantity purchased is more than 1000. If quantity
and price per item are input through the keyboard, write a program
to calculate the total expenses.*/

#include <stdio.h>
int main()
{
    int price_per_item, quantity,total_expenses;
    printf("Enter the price per item: ");
    scanf("%d", &price_per_item);
    printf("Enter the quantity of item: ");
    scanf("%d", &quantity);
    total_expenses = quantity * price_per_item;
    if(total_expenses>1000)
    {
        printf("The total expense after discount is: %d", total_expenses/10);
    }
    else
    {
        printf("The total expense is: %d", total_expenses);
    }
    return 0;
}




