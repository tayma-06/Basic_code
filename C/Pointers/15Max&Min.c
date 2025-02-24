#include <stdio.h>
int main()
{
    int n;
    printf("Input the number of elements tobe stored in the array : ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("element - %d : ", i);
        scanf("%d", arr + i);
    }
    int max = *arr, min = *arr;
    for (int i = 0; i < n; i++)
    {
        if (*(arr + i) > max)
            max = *(arr + i);
        if (*(arr + i) < min)
            min = *(arr + i);
    }
    printf("The largest number is : %d\n", max);
    printf("The smallest number is : %d\n", min);
}