#include <stdio.h>
#include <string.h>

struct Item {
    char name[50];
    int quantity;
    float price;
    float total;
};

int main() {
    struct Item items[50];
    int choice, count = 0;
    float grandTotal = 0;

    while (1) {
        printf("\n====== BILLING SYSTEM MENU ======\n");
        printf("1. Add Item\n");
        printf("2. Display Bill\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("\nEnter item name: ");
            scanf("%s", items[count].name);

            printf("Enter quantity: ");
            scanf("%d", &items[count].quantity);

            printf("Enter price per unit: ");
            scanf("%f", &items[count].price);

            items[count].total = items[count].quantity * items[count].price;
            grandTotal += items[count].total;

            count++;
            printf("Item added successfully!\n");

        } else if (choice == 2) {
            printf("\n========= FINAL BILL =========\n");
            printf("%-20s %-10s %-10s %-10s\n", "Item Name", "Qty", "Price", "Total");
            printf("----------------------------------------------\n");

            for (int i = 0; i < count; i++) {
                printf("%-20s %-10d %-10.2f %-10.2f\n",
                       items[i].name, items[i].quantity, items[i].price, items[i].total);
            }

            printf("----------------------------------------------\n");
            printf("Grand Total: %.2f\n", grandTotal);
            printf("==============================================\n");

        } else if (choice == 3) {
            printf("\nExiting... Thank you!\n");
            break;

        } else {
            printf("\nInvalid choice! Please try again.\n");
        }
    }

    return 0;
}
