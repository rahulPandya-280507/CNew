#include <stdio.h>
int main() {
    double x = 5.75;
    int y = (int)x;   // Explicitly convert double to int
    printf("x = %.2f, y = %d\n", x, y);
    return 0;
}
