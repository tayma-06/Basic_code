// Bismillahir Rahmanir Rahim
// Author : Khadiza Sultana
// Date   : 1/19/2025

/*COUNTS THE TOTAL DUPLICATE ELEMENTS*/

#include <stdio.h>

void storeArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
}

int countDuplicates(int arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i != j && arr[i] == arr[j])
                count++;
        }
    }
    return count;
}

int main()
{
    int n;
    printf("Enter the size of array : ");
    scanf("%d", &n);
    int arr[n];

    printf("Enter the elements of the array: ");
    storeArray(arr, n);

    printf("Count of Duplicate Elements in the Array : %d", countDuplicates(arr, n))arr, n));

    return 0;
}  <stdio.h>

void storeArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
}

int countDuplicates(int arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (arr[i] == arr[j++])
                count++;
        }
    }
    return count;
}

int main()
{
    int n;
    printf("Enter the size of array : ");
    scanf("%d", &n);
    int arr[n];

    printf("Enter the elements of the array: ");
    storeArray(arr, n);

    printf("Count of Duplicate Elements in the Array : %d", sumOfElements(arr, n));

    return 0;
}