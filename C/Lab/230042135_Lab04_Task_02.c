#include<stdio.h>
int main()
{
    int H,h,M,m,D,d,X,x,P,Q,R,S;
    printf("Enter Birth Time & Date:");
    scanf("%1d%1d %1d%1d %1d%1d %1d%1d %1d%1d%1d%1d", &H,&h,&M,&m,&D,&d,&X,&x,&P,&Q,&R,&S );
    int code= (D*d+M*m+P+Q+R+S-H+h-X) % x;
    printf("Code: %d", code);
    return 0;

}