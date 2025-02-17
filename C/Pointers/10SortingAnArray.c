#include <stdio.h>
int main()
{
    int n;
    printf("Input the number of elements to store in the array : ");
    scanf("%d", &n);
    int arr[n];
    printf("Input %d numbers of elements in the array : \n");
    for (int i = 0; i < n; i++)
    {
        printf("Element - %d : ", i);
        scanf("%d", arr + i);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (*(arr + j) > *(arr + j + 1))
            {
                int temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
    }
    printf("After Sorting : \n");
    for (int i = 0; i < n; i++)
    {
        printf("Element - %d : %d\n", i, *(arr + i));
    }
    return 0;
}