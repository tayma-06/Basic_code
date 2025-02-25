#include <stdio.h>
void reduceFraction(int nume, int denominator, int *ptr_rnume, int *ptr_rdenom)
{
    int n = nume, m = denominator;
    int r;
    while (n != 0)
    {
        r = m % n;
        m = n;
        n = r;
    }
    *ptr_rnume = nume / m;
    *ptr_rdenom = denominator / m;
}
int main()
{
    int a, b;
    printf("Enter a fraction in a/b form : ");
    scanf("%d/%d", &a, &b);
    int red_num, red_den;
    reduceFraction(a, b, &red_num, &red_den);
    printf("Reduced Fraction : %d/%d", red_num, red_den);
    return 0;
}