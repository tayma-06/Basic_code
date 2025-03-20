#include<stdio.h>
int main()
{
    int n,o,t,h,th;
    printf("Enter 4 digit integer:");
    scanf("%d", &n);
    o=(n%10)+1;
    t=(n/10)%10+1;
    h=((n/100))%10+1;
    th=(n/1000)+1;
    printf("%d%d%d%d",o,t,h,th);
    return 0;
}
