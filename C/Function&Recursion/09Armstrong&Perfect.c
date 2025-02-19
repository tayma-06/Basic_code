#include <stdio.h>
int isArmstrong(int n)
{
    int sum = 0, num = n;
    while (num != 0)
    {
        int rem = n % 10;
        sum += rem * rem * rem;
        num /= 10;
    }
    if (sum == n)
        return 1;
    return 0;
}
int isPerfect(int n)
{
    int sum = 0, num = n;
    for (int i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            sum += i;
        }
    }
    if (n == sum)
        return 1;
    return 0;
}
int main()
{
    int n;
    printf("Input any number : ");
    scanf("%d", &n);
    if (isArmstrong(n))
        printf("The number is an Armstrong number.\n");
    else
        printf("The number is not an Armstrong number.\n");
    if (isPerfect(n))
        printf("The number is a Perfect number.\n");
    else
        printf("The number is not a Perfect number.\n");
    return 0;
}