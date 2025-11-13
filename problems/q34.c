/*
wacp to call by reference
*/

int swap(int *x, int *y);

#include <stdio.h>
int main() {
    int a, b;
    printf("Enter two inetegers: ");
    scanf("%d %d", &a, &b);
    printf("Before swapping: %d, %d\n", a,b);
    swap(&a, &b);
    printf("After swapping: %d, %d", a,b);
    return 0;
}

int swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}