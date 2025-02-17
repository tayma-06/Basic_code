#include <stdio.h>
int main()
{
    int a, b, *aptr, *bptr;
    printf("Input the first number : ");
    scanf("%d", &a);
    printf("Input the second number : ");
    scanf("%d", &b);
    aptr = &a;
    bptr = &b;
    if (*aptr > *bptr)
    {
        printf("%d is the maximum number.\n", *aptr);
    }
    else
    {
        printf("%d is the maximum number.\n", *bptr);
    }
    return 0;
}