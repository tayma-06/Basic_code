#include <stdio.h>
int checkAnagram()
{
    int freq1[26] = {0}, freq2[26] = {0};
    char ch;
    printf("Input the first string: ");
    while ((ch = getchar()) != '\n')
    {
        if (ch >= 'a' && ch <= 'z')
            freq1[ch - 'a']++;
        else if (ch >= 'A' && ch <= 'Z')
            freq1[ch - 'A']++;
    }
    printf("Input the second string: ");
    while ((ch = getchar()) != '\n')
    {
        if (ch >= 'a' && ch <= 'z')
            freq2[ch - 'a']++;
        else if (ch >= 'A' && ch <= 'Z')
            freq2[ch - 'A']++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (freq1[i] != freq2[i])
            return 0;
    }
    return 1;
}
int main()
{
    if (checkAnagram())
        printf("The strings are anagrams.\n");
    else
        printf("The strings are not anagrams.\n");

    return 0;
}
