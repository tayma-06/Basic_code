// Bismillahir Rahmanir Rahim
// Author : Khadiza Sultana
// Date   : 1/18/2025

#include <stdio.h>

int binarySearchIterative(int arr[], int low, int high, int tar)
{
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == tar)
            return mid;
        else if (arr[mid] < tar)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

int binarySearchRecursive(int arr[], int low, int high, int tar)
{
    if (low > high)
        return -1;
    int mid = low + (high - low) / 2;
    if (arr[mid] == tar)
        return mid;
    else if (arr[mid] < tar)
        binarySearchRecursive(arr, mid + 1, high, tar);
    else
        binarySearchRecursive(arr, low, mid - 1, tar);
}

int main()
{
    int n;
    printf("Enter the size of the array : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int x;
    printf("Enter the target element : ");
    scanf("%d", &x);
    int resultIterative = binarySearchIterative(arr, 0, n - 1, x);
    if (resultIterative == 1)
        printf("Element is not present in array\n");
    else
        printf("Element is present at index %d (Iterative)\n", resultIterative);

    int resultRecursive = binarySearchRecursive(arr, 0, n - 1, x);
    if (resultRecursive == 1)
        printf("Element is not present in array\n");
    else
        printf("Element is present at index %d (Recursive)\n", resultRecursive);
    return 0;
}