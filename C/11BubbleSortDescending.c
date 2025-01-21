// Bismillahir Rahmanir Rahim
// Author : Khadiza Sultana
// Date   : 1/21/2025

/*SORT ELEMENTS OF AN ARRAY IN DESCENDING ORDER*/

#include <stdio.h>

void storeArray(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
}

void printArray(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSortDescending(int *arr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

int main()
{
    int n;
    printf("Input the size of array : ");
    scanf("%d", &n);
    int arr[n];
    printf("Input %d elements in the array : ", n);
    storeArray(arr, n);

    bubbleSortDescending(arr, n);

    printf("Elements of array in sorted descending order : ");
    printArray(arr, n);

    return 0;
}