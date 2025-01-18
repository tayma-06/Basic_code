// Bismillahir Rahmanir Rahim
// Author : Khadiza Sultana
// Date   : 1/19/2025

/* COUNTS THE TOTAL DUPLICATE ELEMENTS */

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
    int visited[n]; 
    for (int i = 0; i < n; i++)
    {
        visited[i] = 0; 
    }

    for (int i = 0; i < n; i++)
    {
        if (visited[i] == 1) 
            continue;
        int isDuplicate = 0; 
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                isDuplicate = 1;
                visited[j] = 1; 
            }
        }
        if (isDuplicate)
            count++;
    }
    return count;
}

int main()
{
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int arr[n];

    printf("Enter the elements of the array: ");
    storeArray(arr, n);

    printf("Count of Duplicate Elements in the Array: %d\n", countDuplicates(arr, n));

    return 0;
}
