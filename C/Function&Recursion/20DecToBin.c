#include <stdio.h>
void decimalToBinary(int n)
{
    if (n == 0)
        return;
    decimalToBinary(n / 2);
    printf("%d", n % 2);
}
int main()
{
    int num;
    printf("Input any decimal number: ");
    scanf("%d", &num);
    if (num == 0)
    {
        printf("The Binary value of decimal no. 0 is: 0\n");
    }
    else
    {
        printf("The Binary value of decimal no. %d is: ", num);
        decimalToBinary(num);
        printf("\n");
    }
    return 0;
}
