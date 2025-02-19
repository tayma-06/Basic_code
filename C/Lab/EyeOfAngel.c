#include <stdio.h>
void storearray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
}
int main()
{
    int K;
    printf("Enter K: ");
    scanf("%d", &K);
    int p1[K], p2[K];
    printf("Player 1: ");
    storearray(p1, K);
    printf("Player 2: ");
    storearray(p2, K);
    int matches = 0;
    for (int i = 0; i < K; i++)
    {
        for (int j = 0; j < K; j++)
        {
            if (p1[i] == p2[j])
            {
                matches++;
                break;
            }
        }
    }
    printf("Number of matches: %d\n", matches);
    if (matches > K+1 / 2)
        printf("Congratulations, you won!\n");
    else
        printf("Sorry, you lost!");
    return 0;
}