#include <stdio.h>

void printArray(int arr[], int size);

int main() {
     // input array
    int arr[50], size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    printf("Enter the elements of the array of size %d: ", size);
    for(int i = 0; i<size; i++) {
        scanf("%d", &arr[i]);
    }
    // printing statements
    printf("\nUnsorted array: ");
    printArray(arr, size);
    printf("\nSorting array...");
    
    printf("\nSorted array: ");
    printArray(arr, size);

    return 0;
}

void printArray(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
}

