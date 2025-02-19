#include <stdio.h>
int findMax(int arr[], int size, int index, int maxVal)
{
    if (index == size)
        return maxVal;
    if (arr[index] > maxVal)
        maxVal = arr[index];
    return findMax(arr, size, index + 1, maxVal);
}
int main()
{
    int arr[] = {12, 45, 67, 89, 34, 23, 99, 56};
    int size = sizeof(arr) / sizeof(arr[0]);
    int maxElement = findMax(arr, size, 0, arr[0]);
    printf("Largest element in the array: %d\n", maxElement);
    return 0;
}
