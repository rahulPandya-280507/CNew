/*
wacp to calculate squares from 1 to 20
*/

#include <stdio.h>
int main() {
    printf("The squares of numbers from 1 to 20 are: \n");
    for(int i=1; i<=20; i++) {
        printf("%d^2 = %d\n", i, i*i);
    }
    return 0;
}