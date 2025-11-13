/*
wacp to calculate square root from 1 to 30
*/

#include <stdio.h>
#include <math.h>
int main() {
    printf("The squares of numbers from 1 to 20 are: \n");
    for(int i=1; i<=20; i++) {
        printf("square root of %d = %.2f\n", i, sqrt(i));
    }
    return 0;
}