#include <stdio.h>
int main()
{
    int n;
    printf("Enter N: ");
    scanf("%d", &n);
    int arr[n][n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter row %d: ", i + 1);
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int rSum[n], cSum[n];
    for (int i = 0; i < n; i++)
    {
        rSum[i] = 0;
        for (int j = 0; j < n; j++)
        {
            rSum[i] += arr[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        cSum[i] = 0;
        for (int j = 0; j < n; j++)
        {
            cSum[i] += arr[j][i];
        }
    }
    printf("Row Totals: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", rSum[i]);
    }
    printf("\nCol Totals: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", cSum[i]);
    }
    printf("\n");
    return 0;
}