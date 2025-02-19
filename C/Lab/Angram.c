#include <stdio.h>
int main()
{
    char ch1;
    int freq1[26] = {0}, i = 0;
    while ((ch1 = getchar()) != '\n')
    {
        freq1[ch1 - 'a']++;
        i++;
    }
    char ch2;
    int freq2[26] = {0};
    i = 0;
    while ((ch2 = getchar()) != '\n')
    {
        freq2[ch2 - 'a']++;
        i++;
    }
    int isAngram = 1;
    for (int i = 0; i < 26; i++)
    {
        if (freq1[i] != freq2[i])
        {
            isAngram = 0;
            break;
        }
    }
    if (isAngram == 1)
    {
        printf("Input words are angrams\n");
    }
    else
    {
        printf("Input words are not angrams\n");
    }
    return 0;
}