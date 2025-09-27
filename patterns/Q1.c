// Q1
/*
    1 2 3 4
    1 2 3 4
    1 2 3 4
    1 2 3 4
*/
/*
    #include <stdio.h>
    int main() {
        int rows;
        printf("Enter the number of times you want the row to repeat: ");
        scanf("%d", &rows);
        for(int i=0; i<rows; i++) {
            for (int j=0; j<rows; j++) {
                printf("%d ", j+1);
            }
            printf("\n");
        }
    }
*/


// same pattern for stars
/*
#include <stdio.h>
int main()
{
    int rows;
    printf("Enter the number of times you want the row to repeat: ");
    scanf("%d", &rows);
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
*/

//same program for alphabets
/*
#include <stdio.h>
int main()
{
    int rows;
    printf("Enter the number of times you want the row to repeat: ");
    scanf("%d", &rows);
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            printf("%c ", 'A' + j);
        }
        printf("\n");
    }
}
*/

/*
    1 2 3 
    4 5 6
    7 8 9
*/
/*
#include <stdio.h>
int main() {
    int rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    int count =1;
    for(int i=0; i<rows; i++) {
        for(int j=0; j<rows; j++) {
            printf("%d ", count);
            count++;
        }
        printf("\n");
    }
}
*/