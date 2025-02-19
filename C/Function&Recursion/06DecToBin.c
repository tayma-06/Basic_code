#include <stdio.h>
int decToBin(int dec)
{
    int rem, binform = 0, pow = 1;
    while (dec != 0)
    {
        rem = dec % 2;
        binform += rem * pow;
        pow *= 10;
        dec /= 2;
    }
    return binform;
}
int main()
{
    int dec;
    printf("Input any decimal number : ");
    scanf("%d", &dec);
    printf("The Binary value is : %d", decToBin(dec));
    return 0;
}