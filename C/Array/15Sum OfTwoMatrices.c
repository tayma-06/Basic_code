// Bismillahir Rahmanir Rahim
// Author : Khadiza Sultana
// Date   : 1/21/2024

/*SUM OF TWO MATRIX*/

#include <stdio.h>

void storeMatrix(int arr[][100], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
}

void printMatrix(int arr[][100], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void sumOfMatrix(int arr1[][100], int arr2[][100], int m, int n)
{
    int ans[100][100];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            ans[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
    printf("The Addition of two matrix is : \n");
    printMatrix(ans, m, n);
}

int main()
{
    int m, n;
    printf("Input the number of rows : ");
    scanf("%d", &m);
    printf("Input the number of columns : ");
    scanf("%d", &n);

    int mat1[100][100];
    printf("Input the elements of the first matrix : ");
    storeMatrix(mat1, m, n);

    int mat2[100][100];
    printf("Input the elements of the second matrix : ");
    storeMatrix(mat2, m, n);

    sumOfMatrix(mat1, mat2, m, n);

    return 0;
}