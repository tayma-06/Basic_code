#include <stdio.h>
#include <ctype.h>
int main()
{
    char str[200], ch;
    int len = 0;
    printf("Enter a message : ");
    while ((ch = getchar()) != '\n')
    {
        if (isalpha(ch))
        {
            *(str + len) = tolower(ch);
            len++;
        }
    }
    char *st = str, *end = str + len - 1, isPalindrome = 1;
    while (st <= end)
    {
        if (*st != *end)
        {
            isPalindrome = 0;
            break;
        }
        st++;
        end--;
    }
    if (isPalindrome)
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");
    return 0;
}
