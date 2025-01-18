// Bismillahir Rahmanir Rahim
// Author : Khadiza Sultana
// Date   : 1/19/2025

/*SUM OF ALL ELEMENTS*/

#include <stdio.h>

void storeArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
}

int sumOfElements(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int main()
{
    int n;
    printf("Enter the size of array : ");
    scanf("%d", &n);
    int arr[n];

    printf("Enter the elements of the array: ");
    storeArray(arr, n);

    printf("Sum of the elements in Array : %d", sumOfElements(arr, n));

    return 0;
} 