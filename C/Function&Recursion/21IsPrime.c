#include <stdio.h>
int isPrime(int n, int i)
{
    if (n < 2)
        return 0;
    if (i == 1)
        return 1;
    if (n % i == 0)
        return 0;
    return isPrime(n, i - 1);
}
int main()
{
    int num;
    printf("Input any positive number: ");
    scanf("%d", &num);

    if (isPrime(num, num / 2))
        printf("The number %d is a prime number.\n", num);
    else
        printf("The number %d is not a prime number.\n", num);

    return 0;
}
