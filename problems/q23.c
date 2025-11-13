/*
wacp to store and display marks of 5 students
*/

#include <stdio.h>
int main() {
    int size = 5;
    int student[size];
    printf("Enter the marks of 5 students: \n");
    for(int i = 0; i<5; i++) {
        scanf("%d", &student[i]);
    }
    printf("The marks of 5 students are: \n");
    for(int i = 0; i<5; i++) {
        printf("The marks of student %d are: %d\n", i+1, student[i]);
    }
    return 0;
}