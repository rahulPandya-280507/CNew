/*
        1
      1 2 1
    1 2 3 2 1
  1 2 3 4 3 2 1
*/
#include <stdio.h>
int main() {
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    for(int i=0; i<n; i++) {
        for (int j=i; j<n-i; j++) {
            printf("   ");
        }
        for(int k = 0; k<=i; k++) {
            printf("%d ", k+1);
        }
        for(int l=i-1; l>=0; l--) {
            printf("%d ", l+1);
        }
        printf("\n");
    }
}