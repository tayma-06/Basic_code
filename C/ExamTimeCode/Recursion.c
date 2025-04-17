#include<stdio.h>
#include<math.h>
double sequence(int n)
{
    if(n == 1) return 1;
    return pow(-1, n+1)*1.0/n + sequence(n-1);
}
int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("The summation of %dth series : %lf\n", n, sequence(n));
    return 0;
}