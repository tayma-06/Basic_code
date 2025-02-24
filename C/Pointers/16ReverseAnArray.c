#include <stdio.h>
int main()
{
    int n;
    printf("Input the number of elements you want to store : ");
    scanf("%d", &n);
    int arr[n];
    printf("Input the elements of the array : \n");
    for (int i = 0; i < n; i++)
    {
        printf("element - %d : ", i);
        scanf("%d", arr + i);
    }
    int st = 0, end = n - 1;
    while (st <= end)
    {
        int temp = *(arr + st);
        *(arr + st) = *(arr + end);
        *(arr + end) = temp;
        st++;
        end--;
    }
    printf("The elements of array in reverse order are : \n");
    for (int i = 0; i < n; i++)
    {
        printf("element - %d : %d\n", i, *(arr + i));
    }
    return 0;
}