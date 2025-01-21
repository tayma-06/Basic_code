// Bismillahir Rahmanir Rahim
// Author : Khadiza Sultana
// Date   : 1/21/2025

/*DELETE AN ELEMENT FROM A DESIRED POSITION*/

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

int main()
{
    int n;
    printf("Input the size of array : ");
    scanf("%d", &n);

    int arr[n];
    printf("Input %d elements in the array in ascending order : ", n);
    storeArray(arr, n);

    int pos;
    printf("Input position where to delete : ");
    scanf("%d", &pos);
    for (int i = 0; i < n - 1; i++)
    {
        arr[pos + i] = arr[pos + i + 1];
    }
    printf("The new list is : ");
    printArray(arr, n - 1);

    return 0;
}