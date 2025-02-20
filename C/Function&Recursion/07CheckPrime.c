#include <stdio.h>
int checkPrime(int n)
{
    if (n < 2)
        return 0;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}
int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);
    if (checkPrime(num))
        printf("The number %d is a Prime number.\n", num);
    else
        printf("The number %d is not a prime number.\n", num);
    return 0;
}
