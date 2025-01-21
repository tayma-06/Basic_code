// Bismillahir Rahmanir Rahim
// Author : Khadiza Sultana
// Date   : 1/21/2025

/*FIND THE MINIMUN AND MAXIMUM ELEMENT IN AN ARRAY*/

#include <stdio.h>

void storeArray(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
}

int maxElement(int *arr, int n)
{
    int max = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    return max;
}

int minElement(int *arr, int n)
{
    int min = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    return min;
}

int main()
{
    int n;
    printf("Input the number of elements of the array : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the %d elements of the array : ", n);
    storeArray(arr, n);

    printf("Maximum element is : %d\n", maxElement(arr, n));
    printf("Minimum element is : %d\n", minElement(arr, n));

    return 0;
}