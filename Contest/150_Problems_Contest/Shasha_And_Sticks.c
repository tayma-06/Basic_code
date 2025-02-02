#include<stdio.h>
int main(){
    long long n, k;
    scanf("%lld %lld", &n, &k);
    long long turn = n / k;
    if (turn % 2 == 1)
       printf("YES\n");
    else 
       printf("NO\n");
    return 0;
}
