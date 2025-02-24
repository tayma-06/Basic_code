#include <stdio.h>
int main()
{
    char str[200];
    printf("Enter the sentence : ");
    scanf("%s", str);
    int i = 0, countV = 0, countC = 0;
    while (*(str + i) != '\0')
    {
        if (*(str + i) >= 'A' && *(str + i) <= 'Z')
            *(str + i) = 'a' + (*(str + i) - 'A');
        if (*(str + i) == 'a' || *(str + i) == 'e' || *(str + i) == 'i' || *(str + i) == 'o' || *(str + i) == 'u')
            countV++;
        else
            countC++;
        i++;
    }
    printf("Number of vowels : %d\n", countV);
    printf("Number of consonanr : %d\n", countC);
    return 0;
}