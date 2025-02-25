#include <stdio.h>
double *getPtrToMedian(double arr[], int len, int *secondMedian)
{
    double *p = &arr[0];
    if (len % 2 == 0)
    {
        *secondMedian = 1;
        p = p + ((len / 2) - 1);
        return p;
    }
    p = p + (((len + 1) / 2) - 1);
    return p;
}
int main()
{
    int n;
    printf("Enter length of the array : ");
    scanf("%d", &n);
    double arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%lf", &arr[i]);
    }
    int secondMedian = 0;
    double median = *(getPtrToMedian(arr, n, &secondMedian));
    if (secondMedian)
    {
        double median2 = *(getPtrToMedian(arr, n, &secondMedian) + 1);
        printf("Medians : %lf and %lf\n", median, median2);
    }
    else
        printf("Median : %lf\n", median);
}