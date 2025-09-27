//this is a file that teaches you about different patterns you can cretae in C!
//Q1
/*
    1 2 3 4
    1 2 3 4
    1 2 3 4
    1 2 3 4
*/
//ALGORITHM
/*
    1] Start
    2] take input of number of rows(i.e. the number of times they want the row to repeat) and the number of columns(i.e. till what number do they want to print the numbers) from the user
    3] run a loop from 1 to number of rows
    4] run a nested loop from 1 to number of columns
    5] end
*/

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

