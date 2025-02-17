#include <stdio.h>
void factorial(int *num, int *fact)
{
    for (int i = 1; i <= *num; i++)
    {
        *fact *= i;
    }
}
int main()
{
    int num, fact = 1;
    printf("Input a number : ");
    scanf("%d", &num);
    factorial(&num, &fact);
    printf("The Factorial of %d is %d", num, fact);
    return 0;
}