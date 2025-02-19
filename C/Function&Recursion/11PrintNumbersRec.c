#include <stdio.h>
void numPrint(int num, int i)
{
    if (i <= 50)
    {
        printf("%d ", i);
        numPrint(num, i + 1);
    }
}
int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);
    printf("The natural numbers are : ");
    numPrint(num, 1);
    return 0;
}