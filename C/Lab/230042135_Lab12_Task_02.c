#include <stdio.h>
int main()
{
    char c = 'a', *p_c = &c;
    int i = 5, *p_i = &i;
    long long ll = 100, *p_ll = &ll;
    float flt = 2.4, *p_flt = &flt;
    double dbl = 5.2, *p_dbl = &dbl;
    printf("Name         Type  Size          VarAdd   VarValue   PtrName          PtrVal    PtrDeref\n");
    printf("----         ----  ----          ------   --------   -------          ------    --------\n");
    printf("   c         char     %zu        %p         %c        p_c        %p           %c\t\n", sizeof(c), &c, c, p_c, *p_c);
    printf("   i          int     %zu        %p         %d        p_i        %p           %d\t\n", sizeof(i), &i, i, p_i, *p_i);
    printf("  ll    long long     %zu        %p       %lld       p_ll        %p         %lld\t\n", sizeof(ll), &ll, ll, p_ll, *p_ll);
    printf("   f        float     %zu        %p    %.4f      p_flt        %p      %.4f\t\n", sizeof(flt), &flt, flt, p_flt, *p_flt);
    printf(" dbl       double     %zu        %p    %.4lf      p_dbl        %p      %.4lf\t\n", sizeof(dbl), &dbl, dbl, p_dbl, *p_dbl);
    return 0;
}