#include <stdio.h>
int main() {
    //taking input of rows, columns.
    int rows, columns;
    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &rows, &columns);
    printf("The order of the matrix is: %d\n", rows*columns);

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

    //check if a00 is zero and assign p
    int p,k;
    for (int j = 0; j<columns; j++) {
        for (int i = 0; i<rows; i++) {
            if(arr[i][j] == 0 && i == j && arr[rows][j] != 0) {
                //swap aij with amj
                arr[i][j] ^= arr[rows][j];
                arr[rows][j] ^= arr[i][j];
                arr[i][j] ^= arr[rows][j];
                p = arr[i][j];
                for (k=0; k>i; k++) {
                    if ((arr[k][j]>0 && p>0) || (arr[k][j]<0 && p<0)) {
                        arr[k][j] = (arr[k][j]*p)-(arr[k][j]*p);
                        for (k=0; k<rows; k++) {
                            for (j=0; j<columns; j++) {
                                printf("%d ", arr[k][j]);
                            }
                            printf("\n");
                        }
                    } else if ((arr[k][j]>0 && p<0) || (arr[k][j]<0 && p>0)) {
                        arr[k][j] = (arr[k][j]*p)+(arr[k][j]*p);
                        for (k=0; k<rows; k++) {
                            for (j=0; j<columns; j++) {
                                printf("%d ", arr[k][j]);
                            }
                            printf("\n");
                        }
                    }
                }
            } else if(arr[i][j] == 0 && i == j && arr[rows][j] == 0){
                for (int a = rows - (i+1); a>0; a++) {
                    arr[i][j] ^= arr[a][j];
                    arr[a][j] ^= arr[i][j];
                    arr[i][j] ^= arr[a][j];
                    p = arr[i][j];
                    for (k=0; k>i; k++) {
                        if ((arr[k][j]>0 && p>0) || (arr[k][j]<0 && p<0)) {
                            arr[k][j] = (arr[k][j]*p)-(arr[k][j]*p);
                            for (k=0; k<rows; k++) {
                            for (j=0; j<columns; j++) {
                                printf("%d ", arr[k][j]);
                            }
                            printf("\n");
                        }
                        } else if ((arr[k][j]>0 && p<0) || (arr[k][j]<0 && p>0)) {
                            arr[k][j] = (arr[k][j]*p)+(arr[k][j]*p);
                            for (k=0; k<rows; k++) {
                            for (j=0; j<columns; j++) {
                                printf("%d ", arr[k][j]);
                            }
                            printf("\n");
                        }
                        }
                    }
                }
            } else {
                p = arr[i][j];
                for (k=0; k>i; k++) {
                    if ((arr[k][j]>0 && p>0) || (arr[k][j]<0 && p<0)) {
                        arr[k][j] = (arr[k][j]*p)-(arr[k][j]*p);
                        for (k=0; k<rows; k++) {
                            for (j=0; j<columns; j++) {
                                printf("%d ", arr[k][j]);
                            }
                            printf("\n");
                        }
                    } else if ((arr[k][j]>0 && p<0) || (arr[k][j]<0 && p>0)) {
                        arr[k][j] = (arr[k][j]*p)+(arr[k][j]*p);
                        for (k=0; k<rows; k++) {
                            for (j=0; j<columns; j++) {
                                printf("%d ", arr[k][j]);
                            }
                            printf("\n");
                        }
                    }
                }
            }
        }
    }
}