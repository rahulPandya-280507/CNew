/*
WAP FOR Accessing Union Members
*/

#include <stdio.h>
#include <string.h>

union student {
    char name[100];
    int roll_no;
};

int main() {
    union student s1;

    // store and print name
    strcpy(s1.name, "Rahul");
    printf("Name: %s\n", s1.name);

    // store and print roll number (overwrites name)
    s1.roll_no = 35;
    printf("Roll No: %d\n", s1.roll_no);

    return 0;
}
