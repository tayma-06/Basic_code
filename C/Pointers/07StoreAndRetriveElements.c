#include <stdio.h>
int main()
{
    int n;
    printf("Enter number of elements : ");
    scanf("%d", &n);
    printf("Enter the elements of the array : ");
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", arr + i);
    }
    for (int i = 0; i < n; i++)
    {
        printf("element - %d : %d\n", i, *(arr + i));
    }
    return 0;
}