#include <stdio.h>
#include <string.h>
int isPalindrome(char str[], int start, int end)
{
    if (start >= end)
        return 1;
    if (str[start] != str[end])
        return 0;
    return isPalindrome(str, start + 1, end - 1);
}
int main()
{
    char str[100];
    printf("Input a word to check for palindrome: ");
    scanf("%s", str);
    int length = strlen(str);
    if (isPalindrome(str, 0, length - 1))
        printf("\nThe entered word is a palindrome.\n");
    else
        printf("\nThe entered word is not a palindrome.\n");
    return 0;
}
