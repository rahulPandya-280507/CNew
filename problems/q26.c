/*
program to display a 2x2 matrix
*/

#include <stdio.h>
int main() {
    //initializing 2x2 matrix
    int rows, columns;
    printf("Enter the dimensions of the matrix (rows,columsn): ");
    scanf("%d %d", &rows, &columns);
    int arr[rows][columns];
    //taking input of array
    printf("Enter the array elements: \n");
    for(int i=0; i<rows; i++) {
        for(int j=0; j<columns; j++) {
            scanf("%d ", &arr[i][j]);
        }
    }
    //printing array
    printf("The array is: \n");
    for(int i=0; i<rows; i++) {
        for(int j=0; j<columns; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}