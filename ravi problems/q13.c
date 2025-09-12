/*Write a C program to count the total number of currency notes in a given amount using if-else*/
#include <stdio.h>
int main() {
    int amount;
    int notes2000 = 0, notes500 = 0, notes200 = 0, notes100 = 0;
    int notes50 = 0, notes20 = 0, notes10 = 0, notes5 = 0, notes2 = 0, notes1 = 0;

    printf("Enter the amount: ");
    scanf("%d", &amount);

    if (amount >= 2000) {
        notes2000 = amount / 2000;
        amount = amount % 2000;
    }
    if (amount >= 500) {
        notes500 = amount / 500;
        amount = amount % 500;
    }
    if (amount >= 200) {
        notes200 = amount / 200;
        amount = amount % 200;
    }
    if (amount >= 100) {
        notes100 = amount / 100;
        amount = amount % 100;
    }
    if (amount >= 50) {
        notes50 = amount / 50;
        amount = amount % 50;
    }
    if (amount >= 20) {
        notes20 = amount / 20;
        amount = amount % 20;
    }
    if (amount >= 10) {
        notes10 = amount / 10;
        amount = amount % 10;
    }
    if (amount >= 5) {
        notes5 = amount / 5;
        amount = amount % 5;
    }
    if (amount >= 2) {
        notes2 = amount / 2;
        amount = amount % 2;
    }
    if (amount >= 1) {
        notes1 = amount;
    }

    printf("\nTotal number of currency notes:\n");
    if (notes2000) printf("2000 : %d\n", notes2000);
    if (notes500)  printf("500  : %d\n", notes500);
    if (notes200)  printf("200  : %d\n", notes200);
    if (notes100)  printf("100  : %d\n", notes100);
    if (notes50)   printf("50   : %d\n", notes50);
    if (notes20)   printf("20   : %d\n", notes20);
    if (notes10)   printf("10   : %d\n", notes10);
    if (notes5)    printf("5    : %d\n", notes5);
    if (notes2)    printf("2    : %d\n", notes2);
    if (notes1)    printf("1    : %d\n", notes1);

    return 0;
}
