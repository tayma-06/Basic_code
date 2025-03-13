#include <stdio.h>
char *myStrNCpy(char *dest, const char *src, size_t n)
{
    for (int i = 0; i <= n; i++)
    {
        dest[i] = src[i];
        if (i == n)
            dest[i] = '\0';
    }
    return dest;
}
int main()
{
    char str[200];
    char dest[200];
    printf("Enter the string : ");
    int len = 0;
    while ((str[len] = getchar()) != '\n')
    {
        len++;
    }
    printf("The copied string is %s.", myStrNCpy(dest, str, len));
    return 0;
}