#include <stdio.h>
int sum(int *num1, int *num2)
{
    int sum = *num1 + *num2;
    return sum;
}
int main()
{
    int a, b;
    printf("Input the first number : ");
    scanf("%d", &a);
    printf("Input the second number : ");
    scanf("%d", &b);
    printf("The sum of %d and %d is %d\n", a, b, sum(&a, &b));
    return 0;
}