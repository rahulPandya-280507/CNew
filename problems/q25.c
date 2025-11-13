/*
program to display initialized one dimensional array
*/
#include <stdio.h>
int main() {
    //initializing array
    int arr[3] = {1, 2 ,3};
    //printing array
    for(int i=0; i<3; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}