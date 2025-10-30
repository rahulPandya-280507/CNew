#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//trying to take the input of a matrix and storing it in a dynamic array 
int main() {
    int size, *mat;
    printf("Enter the size of the 1D array: ");
    scanf("%d", &size);
    mat = (int*)calloc(size, sizeof(int));
    for(int i=0; i<size; i++) {
        printf("%d ", mat[i]);
    }
    printf("\nEnter the elements: \n");
    for(int i=0; i<size; i++) {
        scanf("%d", &mat[i]);
    }
    printf("The elements are: \n");
    for(int i=0; i<size; i++) {
        printf("%d ", mat[i]);
    }
    free(mat);
}