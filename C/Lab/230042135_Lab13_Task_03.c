#include <stdio.h>
void findUniqueElements(int *arr, int *uniqueArr, int len, int *uniqueLen);
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int *q = &arr[0]; q < arr + (n); q++)
    {
        scanf("%d", q);
    }
    int uniqueArr[n];
    int uniquelen = 0;
    findUniqueElements(arr, uniqueArr, n, &uniquelen);
    for (int *a = uniqueArr; a < uniqueArr + uniquelen; a++)
    {
        printf("%d ", *a);
    }
    printf("\n");
    return 0;
}

void findUniqueElements(int *arr, int *uniqueArr, int len, int *uniqueLen)
{
    int *q = uniqueArr;
    for (int *p = arr; p < &arr[0] + len; p++)
    {
        int isUnique = 1;
        for (int *r = arr; r < &arr[0] + len; r++)
        {
            if (r != p && *r == *p)
            {
                isUnique = 0;
                break;
            }
        }
        if (isUnique)
        {
            *q = *p;
            q++;
            (*uniqueLen)++;
        }
    }
}
