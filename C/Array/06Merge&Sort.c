// Bismillahir Rahmanir Rahim
// Author : Khadiza Sultana
// Date   : 1/21/2025

/*A PROGRAM TO MERGE TWO ARRAYS AND SORT IN DESCENDING ORDER*/

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

void sortInDescending(int *arr, int n)
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
    int n1;
    printf("Input the number of elements to be stored in the first array: ");
    scanf("%d", &n1);
    int arr1[n1];
    printf("Input %d elements:\n", n1);
    storeArray(arr1, n1);

    int n2;
    printf("Input the number of elements to be stored in the second array: ");
    scanf("%d", &n2);
    int arr2[n2];
    printf("Input %d elements:\n", n2);
    storeArray(arr2, n2);

    int n3 = n1 + n2;
    int arr3[n3];

    // Merging arrays
    for (int i = 0; i < n1; i++)
    {
        arr3[i] = arr1[i];
    }
    for (int i = 0; i < n2; i++)
    {
        arr3[n1 + i] = arr2[i];
    }

    // Sorting in descending order
    sortInDescending(arr3, n3);

    printf("The merged array in descending order:\n");
    printArray(arr3, n3);

    return 0;
}
