#include <stdio.h>
int main()
{
    int a, b, *aptr, *bptr;
    printf("Input the first number : ");
    scanf("%d", &a);
    printf("Input the second number : ");
    scanf("%d", &b);
    aptr = &a, bptr = &b;
    int sum = *aptr + *bptr;
    printf("The sum of the entered numbers is : %d\n", sum);
    return 0;
}