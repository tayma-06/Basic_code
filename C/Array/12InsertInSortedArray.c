// Bismillahir Rahmanir Rahim
// Author : Khadiza Sultana
// Date   : 1/21/2025

/*INSERT A GIVEN VALUE IN A SORTED ARRAY*/

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
    int arr[101], n, x;
    printf("Input number of elements of the array : ");
    scanf("%d", &n);
    printf("Input %d elements in the array in ascending order : ", n);
    storeArray(arr, n);

    printf("Input the value to be inserted : ");
    scanf("%d", &x);

    printf("The existing array list is : ");
    printArray(arr, n);

    int pos; // will need to find the position of the value needed to be inserted
    for (int i = 0; i < n; i++)
    {
        if (x < arr[i])
        {
            pos = i;
            break;
        }
        else
        {
            pos = i + 1;
        }
    }
    for (int i = n; i >= pos; i--) // will push each every element after c one place backward
    {
        arr[i + 1] = arr[i];
    }
    arr[pos] = x;
    printf("After Insert the list is : ");
    printArray(arr, n + 1);

    return 0;
}
