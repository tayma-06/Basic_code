#include <stdio.h>
int gcd(int n, int m)
{
    if (n == 0)
        return m;
    return (m % n, n);
}
int main()
{
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    printf("GCD of %d and %d is : %d", num1, num2, gcd(num1, num2));
    return 0;
}