#include <stdio.h>
int main()
{
    char ch[200];
    printf("Input a string : ");
    scanf("%s", ch);
    int i = 0;
    while (*(ch + i) != '\0')
    {
        i++;
    }
    printf("The length of the given string %s is : %d", ch, i);
    return 0;
}