#include <stdio.h>

int main() 
{
    int i, j, isPrime;
    printf("Prime numbers between 1 and 50 are:\n");
    for (i = 2; i <= 50; i++)
    {   
        isPrime = 1;  
        for (j = 2; j * j <= i; j++) 
        {  
            if (i % j == 0) 
            {
                isPrime = 0;
                break;
            }
        }
        if (isPrime == 1) 
        {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}


/*
Prime numbers between 1 and 50 are:
2 3 5 7 11 13 17 19 23 29 31 37 41 43 47 
*/