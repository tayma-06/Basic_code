#include <stdio.h>
#include <ctype.h>
int isVowel(char ch)
{
    ch = tolower(ch);
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}
int main()
{
    char str[200], ch;
    printf("Enter a String: ");
    int len = 0;
    while ((ch = getchar()) != '\n')
    {
        if (!isVowel(ch))
        {
            *(str + len) = ch;
            len++;
        }
    }
    printf("Output : ");
    for (char *p = str; p < str + len; p++)
    {
        printf("%c", *p);
    }
    printf("\n");
}