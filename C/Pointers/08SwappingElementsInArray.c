#include <stdio.h>
int main()
{
    int n;
    printf("Input number of elements of the array : ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Input value at index %d : ", i);
        scanf("%d", arr + i);
    }
    printf("Before swapping : \n");
    for (int i = 0; i < n; i++)
    {
        printf("Elements at %d index : %d\n", i, *(arr + i));
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
    printf("After swapping : \n");
    for (int i = 0; i < n; i++)
    {
        printf("Elements at %d index : %d\n", i, *(arr + i));
    }
    return 0;
}