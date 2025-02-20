#include <stdio.h>
int isPalindrome(char str[], int start, int end)
{
    if (start > end)
        return 1;
    if (str[start] != str[end])
        return 0;
    return isPalindrome(str, start + 1, end - 1);
}
int main()
{
    char str[100];
    scanf("%s", str);
    int n = 0;
    while (str[n] != '\0')
        n++;
    if (isPalindrome(str, 0, n - 1))
        printf("Yes\n");
    else
        printf("No\n");
    return 0;
}