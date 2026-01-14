/*
Author: Rahul Pandya
I've created this file in order to take notes according to the topics given in Harry's C DSA course
*/
#include <stdio.h>

int linearSearch(int n, int arr[], int key);
int binarySearch(int n, int arr[], int key);

int main()
{
    int res;
    // taking array as input
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[50];
    printf("Enter the elements of the array in ascending order: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    // making the user input the value they would like to search for!
    int key;
    printf("Enter the number you want to search: ");
    scanf("%d", &key);
    // making a menu driven program in order to let the user choose among the options
    int choice;
    printf("Enter the kind of searching algorith you'd like to use!\n1. Linear Search\t2. Binary Search:\n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        res = linearSearch(n, arr, key);
        if (res == 0)
        {
            printf("The element %d was not found!", key);
        }
        else
        {
            printf("The element %d was found at index %d!", key, res);
        }
        break;
    case 2:
        res = binarySearch(n, arr, key);
        if(res!=-1) {
            printf("The element %d was found at index %d!", key, res);
        } else {
            printf("The element was not found!");
        }
        break;
    default:
        printf("enter correct value!");
    }
    return 0;
}

int linearSearch(int n, int arr[], int key)
{
    int flag = 0, i;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            flag = 1;
            break;
        }
    }
    if (flag != 1)
    {
        // printf("The element was not found in the array!");
        return -1;
    }
    else
    {
        return i;
    }
}

int binarySearch(int n, int arr[], int key)
{
    int low = 0, mid, high = n - 1;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] < key)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}