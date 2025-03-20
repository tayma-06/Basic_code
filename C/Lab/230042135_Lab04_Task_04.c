#include<stdio.h>
#include<math.h>
int main()
{
    float u, v, a;
    printf("Enter Initial Velocity (ms) :");
    scanf("%f", &u);
      printf("Enter Final Velocity (ms) :");
    scanf("%f", &v);
      printf("Enter Acceleration (a) :");
    scanf("%f", &a);
    float s= (pow(v,2)-pow(u,2))/(2*a);
    printf("s: %f\n", s);
    float t= (v-u)/a;
    printf("t: %f\n", t);
    return 0;
}