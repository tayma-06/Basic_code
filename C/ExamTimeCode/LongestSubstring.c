#include <stdio.h>

int main()
{
    char arr[100];
    printf("Enter a sentence : ");
    int len = 0;
    while ((arr[len++] = getchar()) != '\n');
    len--;

    printf("Enter a letter : ");
    char ch;
    scanf(" %c", &ch);

    int maxCount = 0, count = 0, maxCountIdx = -1;

    for (int i = 0; i < len; i++)
    {
        if (arr[i] == ch)
        {
            count++;
            if (count > maxCount)
            {
                maxCount = count;
                maxCountIdx = i - count + 1;
            }
        }
        else
        {
            count = 0;
        }
    }

    if (maxCount > 0)
    {
        printf("Substring : ");
        for (int i = 0; i < maxCount; i++)
        {
            printf("%c", ch);
        }
        printf("\nStarting Index : %d\n", maxCountIdx);
    }
    else
    {
        printf("Character '%c' not found in the sentence.\n", ch);
    }

    return 0;
}
