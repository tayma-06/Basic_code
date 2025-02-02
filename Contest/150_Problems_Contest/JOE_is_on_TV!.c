#include <stdio.h>

int main() 
{
    int n;
    scanf("%d", &n);
    long double sum = 0.0;
    for (int i = 1; i <= n; i++) 
        sum += 1.0 / i;
    printf("%.10llf", sum);
}
