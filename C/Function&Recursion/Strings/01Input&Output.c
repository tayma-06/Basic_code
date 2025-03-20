#include <stdio.h>
#include <string.h>
int main()
{
    char str[200];
    printf("Enter The String : ");
    int len = 0;
    while ((str[len] = getchar()) != '\n')
        len++;
    // we could've written gets(str) instead
    str[len] = '\0';
    printf("The entered string : %s\n", str);
    return 0;
}