#include "power_func.c"
#include <stdio.h>

int main() {
    int n,m;
    printf("Enter the base and exponent: ");
    scanf("%d %d", &n, &m);
    int res = raise(n,m);
    printf("%d", res);
    return 0;
}