#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    int c = a;
    a = b;
    b = c;
    printf("Swapped integers: %d %d", a,b);
    return 0;
}