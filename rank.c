#include <stdio.h>
int main() {
    //taking input of rows, columns.
    int rows, columns;
    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &rows, &columns);
    printf("The order of the matrix is: %dx%d\n", rows,columns);

    //declaring and taking input of matrix
    int arr[rows][columns];
    printf("Enter the elements of the matrix row-wise: \n");
    for(int i=0; i<rows; i++){
        for(int j = 0; j<columns; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    
    //printing the matrix: 
    printf("The matrix is: \n");
    for(int i=0; i<rows; i++){
        for(int j = 0; j<columns; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}