#include <stdio.h>
int main()
{
    char str[200];
    printf("Input a string : ");
    scanf("%s", str);
    int len = 0;
    while (*(str + len) != '\0')
    {
        len++;
    }
    int st = 0, end = len - 1;
    while (st <= end)
    {
        char temp = *(str + st);
        *(str + st) = *(str + end);
        *(str + end) = temp;
        st++;
        end--;
    }
    printf("Reverse of the string is : %s\n", str);
    return 0;
}