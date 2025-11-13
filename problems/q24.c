/*
program to demonstrate declaration and element access of array
*/

#include <stdio.h>
int main() {
    //array declaration
    int arr[5] = {1,2,3,4,5}; //an array of datatype integer and size 5 has been initialized/declared
    //array accessing
    for(int i=0; i<5; i++) {
        printf("%d\n", arr[i]);
    }
    return 0;
}