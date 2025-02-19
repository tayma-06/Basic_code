#include <stdio.h>
#include <string.h>
void reverseString(char str[], int start, int end)
{
    if (start >= end)
    {
        return;
    }
    char temp = str[start];
    str[start] = str[end];
    str[end] = temp;
    reverseString(str, start + 1, end - 1);
}
int main()
{
    char str[100];
    scanf("%99s", &str);
    int len = strlen(str);
    reverseString(str, 0, len - 1);
    printf("%s\n", str);
    return 0;
}
