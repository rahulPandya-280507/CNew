#include <stdio.h>
#include <stdlib.h>

int add() {
    int no_of_matrices, rows, columns;
    printf("Enter the number of matrices: ");
    scanf("%d", &no_of_matrices);
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &columns);
    int mat[no_of_matrices][rows][columns];
    printf("\nEnter the elements of all the arrays: \n");
    for(int k=0; k<no_of_matrices; k++) {
        printf("Enter elements of matrix %d: \n", k+1);
        for(int i=0; i<rows; i++) {
            for (int j=0; j<columns; j++) {
                scanf("%d", &mat[k][i][j]);
            }
        }
    }
    int res[rows][columns];
    for(int i=0; i<rows; i++) {
        for (int j=0; j<columns; j++) {
            res[i][j] = 0;
        }
    }
    for(int i=0; i<rows; i++) {
        for(int j=0; j<columns; j++) {
            for(int k=0; k<no_of_matrices; k++) {
                res[i][j] += mat[k][i][j];
            }
        }
    }
    printf("\nThe resultant matrix is: \n");
    for(int i=0; i<rows; i++) {
        for (int j=0; j<columns; j++) {
            printf("%d ", res[i][j]);
        }
        printf("\n");
    }
}

int sub() {
    int no_of_matrices,rows, columns;
    printf("Enter the number of matrices: ");
    scanf("%d", &no_of_matrices);
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &columns);

    int res[rows][columns];
    printf("\nEnter the first matrix: \n");
    for(int i=0; i<rows; i++) {
        for (int j=0; j<columns; j++) {
            scanf("%d", &res[i][j]);
        }
    }
    int arr[no_of_matrices][rows][columns];
    for(int k=0; k<no_of_matrices-1; k++) {
        printf("Enter the matrix %d: \n", k+2);
        for(int i=0; i<rows; i++){
            for(int j=0; j<columns; j++) {
                scanf("%d", &arr[k][i][j]);
            }
        }
    }
    for (int i=0; i<rows; i++) {
        for(int j=0; j<columns; j++) {
            for(int k=0; k<no_of_matrices-1; k++) {
                res[i][j] -= arr[k][i][j];
            }
        }
    }
    printf("\nThe resultant matrix is: \n");
    for(int i=0; i<rows; i++) {
        for (int j=0; j<columns; j++) {
            printf("%d ", res[i][j]);
        }
        printf("\n");
    }
}