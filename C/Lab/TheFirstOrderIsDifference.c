#include <stdio.h>
void firstDiff(double *arr, double *diff, int len);
int main()
{
    int n;
    printf("Enter the length of array : ");
    scanf("%d", &n);
    double arr[n], diff[n - 1];
    double *p = arr;
    printf("Enter the value of the elements of array : ");
    for (; p < arr + n; p++)
    {
        scanf("%lf", p);
    }
    firstDiff(arr, diff, n);
    printf("The output : ");
    double *q = diff;
    for (; q < diff + n - 1; q++)
    {
        printf("%lf ", *q);
    }
    printf("\n");
    return 0;
}

void firstDiff(double *arr, double *diff, int len)
{
    double *p = arr, *q = diff;
    for (; q < diff + len - 1; p++, q++)
    {
        *q = *(p + 1) - *p;
    }
}
