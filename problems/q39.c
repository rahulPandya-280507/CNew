/*
 Store and Display Data of 3 Employees USING ARRAY IN STRUCTURE
*/

struct employee 
{
    int sr_no;
    char name[100];
    float salary;
};

#include <stdio.h>
int main() {
    struct employee e[3];
    printf("Enter the details of the three employees: \n");
    for(int i=0; i<3; i++) {
        printf("Enter name for employee %d: ", i+1);
        scanf("%s", e[i].name);
        printf("Enter id number for employee %d: ", i+1);
        scanf("%d", &e[i].sr_no);
        printf("Enter salary for employee %d: ", i+1);
        scanf("%f", &e[i].salary);
    }

    printf("\nSr.NO.\tName\tSalary\n");
    for(int i=0; i<3; i++) {
        printf("%d\t%s\t%.2f\n", e[i].sr_no, e[i].name, e[i].salary);
    }
    return 0;
}