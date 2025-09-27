/*
    1 1 1 1
      2 2 2 
        3 3
          4
*/
/*
#include <stdio.h>
int main() {
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    for(int i=0; i<n; i++) {
        for (int j=0; j<i; j++) {
            printf("  ");
        }
        for (int k=0; k<n-i; k++) {
            printf("%d ", i+1);
        }
        printf("\n");
    }
}
*/

/*
    A A A A
      B B B 
        C C
          D
*/
/*
#include <stdio.h>
int main() {
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    for(int i=0; i<n; i++) {
        for (int j=0; j<i; j++) {
            printf("  ");
        }
        for (int k=0; k<n-i; k++) {
            printf("%c ",'A'+i);
        }
        printf("\n");
    }
}
*/