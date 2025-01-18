// Bismillahir Rahmanir Rahim
// Author : Khadiza Sultana
// Date   : 1/19/2025

/*PRINT UNIQUE ELEMENTS*/

#include <stdio.h>

void storeArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
}

void printUniqueElements(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int isUnique = 1;
        for (int j = 0; j < n; j++)
        {
            if (i != j && arr[i] == arr[j])
            {
                isUnique = 0;
                break;
            }
        }
        if (isUnique)
        {
            printf("%d ", arr[i]);
        }
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

    printf("Unique Elements in the Array : ");
    printUniqueElements(arr, n);

    return 0;
}