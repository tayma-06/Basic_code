#include <stdio.h>
typedef struct
{
    int hr;
    int min;
    int sec;
} Time;
int main()
{
    Time t1, t2, result;
    printf("Enter the first time in hr:min:sec format : ");
    scanf("%d:%d:%d", &t1.hr, &t1.min, &t1.sec);
    printf("Enter the second time in hr:min:sec format : ");
    scanf("%d:%d:%d", &t2.hr, &t2.min, &t2.sec);
    result.sec = t1.sec + t2.sec;
    result.min = t1.min + t2.min + result.sec / 60;
    result.hr = t1.hr + t2.hr + result.min / 60;
    result.sec %= 60;
    result.min %= 60;
    printf("Resultant Time : %2d:%2d:%2d\n", result.hr, result.min, result.sec);
    return 0;
}