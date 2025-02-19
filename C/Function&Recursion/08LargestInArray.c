#include <stdio.h>
#include <limits.h>
int largest(int arr[], int n)
{
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}
int main()
{
    int n;
    printf("Enter the number of elements to be stored in the array : ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Element - %d : ", i);
        scanf("%d", &arr[i]);
    }
    printf("The largest element in the array is : %d\n", largest(arr, n));
    return 0;
}