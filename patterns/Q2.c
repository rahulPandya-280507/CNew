/*
    *
    * *
    * * * 
    * * * * 
*/
/*
#include <stdio.h>
int main() {
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    for(int i=0; i<n; i++) {
        for(int j = 0; j<=i; j++) {
            printf("* ");
        }
        printf("\n");
    }
}
*/



/*
    1
    2 2
    3 3 3
    4 4 4 4
*/
/*
#include <stdio.h>
int main() {
    int n, count = 1;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    for(int i=0; i<n; i++) {
        for (int j=0; j<=i; j++) {
            printf("%d ", count);
        }
        printf("\n");
        count++;
    }
}
*/


/*
    A
    B B
    C C C
    D D D D
*/
/*
#include <stdio.h>
int main() {
    int n, count = 0;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    for(int i=0; i<n; i++) {
        for (int j=0; j<=i; j++) {
            printf("%c ", 'A' + count);
        }
        printf("\n");
        count++;
    }
}
*/

/*
    1
    1 2
    1 2 3
    1 2 3 4
*/
/*
#include <stdio.h>
int main() {
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    for(int i=0; i<n; i++) {
        for (int j=0; j<=i; j++) {
            printf("%d ", j+1);
        }
        printf("\n");
    }
}
*/

/*
    1
    2 1
    3 2 1
    4 3 2 1
*/
/*
#include <stdio.h>
int main() {
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        for (int j=i+1; j>=1; j--) {
            printf("%d ", j);
        }
        printf("\n");
    }
}
*/