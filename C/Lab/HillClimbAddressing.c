#include <stdio.h>
#include <stdlib.h>
int *getPtrToMin(int *arr, int len);
int *getPtrToMax(int *arr, int len);
int getIndexDifference(int *p1, int *p2);
int main()
{
    int n;
    printf("Enter the number of elements : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements : ");
    for (int *p = arr; p < arr + n; p++)
    {
        scanf("%d", p);
    }
    int *p1 = getPtrToMin(arr, n);
    int *p2 = getPtrToMax(arr, n);
    int res = abs(getIndexDifference(p1, p2));
    printf("Result is : %d\n", res);
}

int *getPtrToMin(int *arr, int len)
{
    int *ptr = arr, *min_ptr = ptr, min = *ptr;
    for (; ptr < arr + len; ptr++)
    {
        if (*ptr < min)
        {
            min = *ptr;
            min_ptr = ptr;
        }
    }
    return min_ptr;
}

int *getPtrToMax(int *arr, int len)
{
    int *ptr = arr, *max_ptr = ptr, max = *ptr;
    for (; ptr < arr + len; ptr++)
    {
        if (*ptr > max)
        {
            max = *ptr;
            max_ptr = ptr;
        }
    }
    return max_ptr;
}

int getIndexDifference(int *p1, int *p2)
{
    int diff = p1 - p2;
    return diff;
}
