#include <stdio.h>
#include <string.h>

int main() {
    // take input from user to the name of the item
    char name[100];
    float price;
    int qty;
    printf("Enter the name of the product: ");
    scanf("%s", name);
    printf("Enter the price of the product: ");
    scanf("%f", &price);
    printf("Enter the quantity of the product: ");
    scanf("%d", &qty);

    // print the result
    printf("You have bought %d %s worth Rs. %.2f i.e. \ntotal = Rs. %.2f", qty, name, price, qty*price);
    
    return 0;
}