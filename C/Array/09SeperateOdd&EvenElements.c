// Bismillahir Rahmanir Rahim
// Author : Khadiza Sultana
// Date   : 1/21/2025

/*SEPERATE ODD AND EVEN INTEGERS*/

#include <stdio.h>

void storeArray(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
}

int main()
{
    int n;
    printf("Input the number of elements to be stored in the array : ");
    scanf("%d", &n);
    int arr[n];
    printf("Input %d elements in the array : ", n);
    storeArray(arr, n);

    int arrOdd[n], arrEven[n];
    int j = 0, k = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 != 0)
        {
            arrOdd[j] = arr[i];
            j++;
        }
        else
        {
            arrEven[k] = arr[i];
            k++;
        }
    }

    printf("The Odd Elements are : ");
    for (int i = 0; i < j; i++)
    {
        printf("%d ", arrOdd[i]);
    }
    printf("\n");

    printf("The Even Elements are : ");
    for (int i = 0; i < k; i++)
    {
        printf("%d ", arrEven[i]);
    }
    printf("\n");

    return 0;
}
