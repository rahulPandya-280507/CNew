#include <stdio.h>

int main() {
    printf("Hi!\a"); // makes a bell sound
    printf("\nHello\bWorld"); // takes the cursor one step back
    printf("\nHi\tRahul"); // puts a tab space between the words
    printf("\nHi\nRahul"); // puts a new line between the words
    printf("\nHi\v\nRahul"); // puts a vertical tab between the words
    printf("\nHi\fRahul"); // new page/ clear screen
    printf("\nHello\rWorld"); // moves the cursor to the same line

    return 0;
}