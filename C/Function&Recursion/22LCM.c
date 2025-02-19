#include <stdio.h>
int lcm(int a, int b, int multiple)
{
    if (multiple % a == 0 && multiple % b == 0)
        return multiple;
    return lcm(a, b, multiple + 1);
}
int main()
{
    int num1, num2;
    printf("Input 1st number for LCM: ");
    scanf("%d", &num1);
    printf("Input 2nd number for LCM: ");
    scanf("%d", &num2);
    int result = lcm(num1, num2, (num1 > num2) ? num1 : num2);
    printf("The LCM of %d and %d : %d\n", num1, num2, result);
    return 0;
}
