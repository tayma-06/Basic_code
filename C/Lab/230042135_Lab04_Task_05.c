#include<stdio.h>
#include<math.h>
int main()
{
    float A,B;
    printf("Enter number A:");
    scanf("%f", &A);
     printf("Enter number B:");
    scanf("%f", &B);
    float avg= (A+B)/2;
    float variants= (pow((A-avg),2)+pow((B-avg),2))/2;
printf("%.5f", variants);


}