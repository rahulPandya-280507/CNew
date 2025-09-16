/*Write a C program to get the sum of first n nantural numbers using while loop*/
#include <stdio.h>
int main()
{
    int n,i=1,sum=0;
    printf("Enter your limit: ");
    scanf("%d", &n);
    while(i<=n)
    {
        sum+=i;
        i++;
    }
    printf("%d is the sum of first %d natural numbers!", sum, n);
}

/*
Enter your limit: 3
6 is the sum of first 3 natural numbers!
*/