/*Write a C program to find the factorial using a for loop*/
#include <stdio.h>
int main()
{
    int n,pro=1,i;
    printf("Enter the number you want to find the factorial of: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        pro*=i;
    }
    printf("The factorial of %d is: %d", n, pro);
}