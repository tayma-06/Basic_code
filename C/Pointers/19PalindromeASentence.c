#include <stdio.h>
#include <ctype.h>
int main()
{
    char ch[200],c;
    printf("Enter a message : ");
    int len = 0;
    while ((c = tolower(getchar())) != '\n')
    {
        if (isalpha(c))
        {
            *(ch + len) = c;
            len++;
        }
    }
    int st = 0, end = len - 1;
    while (st <= end)
    {
        if (*(ch + st) != *(ch + end))
        {
            printf("Not a palindrome\n");
            return 0;
        }
        st++;
        end--;
    }
    printf("Palindrome\n");
    return 0;
}
