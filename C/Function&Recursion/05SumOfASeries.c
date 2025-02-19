#include <stdio.h>
int fact(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}
int sumOfSeries(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += (fact(i) / i);
    }
    return sum;
}
int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);
    printf("Th sum of the series is : %d\n", sumOfSeries(num));
    return 0;
}