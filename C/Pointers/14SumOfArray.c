#include <stdio.h>
int main()
{
    int n;
    printf("Input the number of elements to store in the array : ");
    scanf("%d", &n);
    int arr[n];
    printf("Input %d number of elements in the array : \n");
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        printf("element - %d : ", i);
        scanf("%d", arr + i);
        sum += *(arr + i);
    }
    printf("The sum of array is : %d", sum);
    return 0;
}