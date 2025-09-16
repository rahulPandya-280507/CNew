#include <stdio.h>
int main() {
    int a,b;
    printf("Enter a and b: ");
    scanf("%d %d", &a, &b);
    printf("%d\n", a&b);
    printf("%d\n", a|b);
    printf("%d\n", a<<b);
    printf("%d\n", a>>b);
    printf("%d\n", a^b);
    printf("%d", ~a);
}