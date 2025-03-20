#include <stdio.h>
int main()
{
    int l, r;
    scanf("%d%d", &l, &r);
    for (int i = l; i <= r; i++)
    {
        int temp = i;
        int isAllowed = 1;
        while (temp != 0)
        {
            int digit = temp % 10;
            if (digit == 0 || i % digit != 0)
            {
                isAllowed = 0;
                break;
            }
            temp /= 10;
        }
        if (isAllowed)
        {
            printf("%d ", i);
        }
    }
    return 0;
}
