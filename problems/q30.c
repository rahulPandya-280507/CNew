/*
wacp to calculate square root from 1 to 30
*/

#include <stdio.h>
#include <math.h>
int main() {
    printf("The square root of numbers from 1 to 30 are: \n");
    for(int i=1; i<=30; i++) {
        printf("sqrt(%d) = %.2f\n", i, sqrt(i));
    }
    return 0;
}