// Bismillahir Rahmanir Rahim
// Author : Khadiza Sultana
// Date   : 1/19/2025

/*PRINTD ARRAY IN REVERSE ORDER*/

#include<stdio.h>

void storeArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
}

void printArrayInReverse(int arr[], int n)
{
    for (int i = n-1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
}

int main()
{
    int n;
    printf("Enter the size of array : ");
    scanf("%d", &n);
    int arr[n];

    printf("Enter the elements of the array: ");
    storeArray(arr, n);

    printf("The elements are printed in Reverse Order: ");
    printArrayInReverse(arr, n);
    printf("\n");

    return 0;
}