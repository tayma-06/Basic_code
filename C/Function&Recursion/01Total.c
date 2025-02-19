#include <stdio.h>
int total(int a, int b)
{
    return a + b;
}
int main()
{
    int a, b;
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);
    printf("The total of %d and %d is %d.\n", a, b, total(a, b));
    return 0;
}