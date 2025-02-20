#include <stdio.h>
long long power(int base, int exp)
{
    if (exp == 0)
    {
        return 1;
    }
    return base * power(base, exp - 1);
}
int main()
{
    int base, exp;
    printf("Input the base value: ");
    scanf("%d", &base);
    printf("Input the value of power: ");
    scanf("%d", &exp);
    printf("The value of %d to the power of %d is: %lld\n", base, exp, power(base, exp));
    return 0;
}
