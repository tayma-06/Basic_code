#include <stdio.h>
#include <ctype.h>
int areAnagrams(const char *word1, const char *word2)
{
    int freq1[26] = {0}, freq2[26] = {0}, i = 0, j = 0;
    while (word1[i] != '\0')
    {
        if (isalpha(word1[i]))
        {
            freq1[tolower(word1[i]) - 'a']++;
        }
        i++;
    }
    while (word2[j] != '\0')
    {
        if (isalpha(word2[j]))
        {
            freq2[tolower(word2[j]) - 'a']++;
        }
        j++;
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
    char word1[50], word2[50];
    printf("Enter the first word : ");
    gets(word1);
    printf("Enter the second word : ");
    gets(word2);
    if (areAnagrams(word1, word2))
        printf("Anagrams\n");
    else
        printf("Not Anagrams\n");
    return 0;
}