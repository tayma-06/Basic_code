#include <stdio.h>
int square(int num)
{
    return num * num;
}
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    printf("The square of %d id %d.\n", n, square(n));
    return 0;
}