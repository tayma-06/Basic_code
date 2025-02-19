#include <stdio.h>
int sumRec(int n)
{
    int res;
    if (n == 1)
        return 1;
    else
        res = n + sumRec(n - 1);
    return res;
}
int main()
{
    int num;
    printf("Input the last number of the range starting from 1 : ");
    scanf("%d", &num);
    printf("The sum of numbers from 1 to %d : %d", num, sumRec(num));
    return 0;
}