/*
WAP FOR : Initialization, Assignment & Passing to Function OF STRUCTURE
*/

#include <stdio.h>
#include <string.h>

// Structure definition
struct Student {
    int id;
    char name[20];
    float marks;
};

// Function declaration
void display(struct Student s);              // pass by value
void updateMarks(struct Student *s, float m); // pass by reference (using pointer)

int main() {
    // Initialization (during declaration)
    struct Student s1 = {101, "Rahul", 87.5};

    //  Assignment (after declaration)
    struct Student s2;
    s2.id = 102;
    strcpy(s2.name, "Neha");
    s2.marks = 91.0;

    //  Passing structure to function (by value)
    printf("Before updating:\n");
    display(s1);
    display(s2);

    //  Passing structure by reference (using arrow operator)
    updateMarks(&s1, 95.0);  // modify s1’s marks
    updateMarks(&s2, 89.5);  // modify s2’s marks

    printf("\nAfter updating marks:\n");
    display(s1);
    display(s2);

    return 0;
}

// Function to display structure (pass by value)
void display(struct Student s) {
    printf("ID: %d\tName: %s\tMarks: %.2f\n", s.id, s.name, s.marks);
}

// Function to update marks (pass by reference)
void updateMarks(struct Student *s, float m) {
    s->marks = m;   // using arrow operator
}
