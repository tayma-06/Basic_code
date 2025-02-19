#include <stdio.h>
int checkOddOrEven(int num)
{
    if (num % 2 == 0)
        return 1;
    return 0;
}
int main()
{
    int n;
    printf("Input any number: ");
    scanf("%d", &n);
    if (checkOddOrEven(n))
        printf("The entered number is even.\n");
    else
        printf("The entered number is odd.\n");
}