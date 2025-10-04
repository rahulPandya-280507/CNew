/*
        1
      1 2 1
    1 2 3 2 1
  1 2 3 4 3 2 1
*/

// #include <stdio.h>
// int main() {
//     int n;
//     printf("Enter the number of rows: ");
//     scanf("%d", &n);
//     for(int i=0; i<n; i++) {
//         for(int j=n-i-1; j>=1; j--) {
//             printf("  ");
//         }
//         for(int k = 1; k<=i+1; k++) {
//             printf("%d ", k);
//         }
//         for(int l = i; l>=1; l--) {
//             printf("%d ", l);
//         }
//         printf("\n");
//     }
// }

/*
   *
  * *
 *   *
  * *
   *
*/

#include <stdio.h>
int main() {
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    for(int i=0; i<n; i++) {
        for(int j=n-i-1; j>=1; j--) {
            printf(" ");
        }
        printf("*");
        if(i!=0) {
            for(int l = 1; l<=2*i-1; l++) {
                printf(" ");
            }
            printf("*");
        }
        printf("\n");
    }
}