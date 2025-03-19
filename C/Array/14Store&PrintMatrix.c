// Bismillahir Rahmanir Rahim
// Author : Khadiza Sultana
// Date   : 1/21/2024

/*PRINT A MxN MATRIX*/

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

int main()
{
    int m, n;
    printf("Input the number of rows : ");
    scanf("%d", &m);
    printf("Input the number of columns : ");
    scanf("%d", &n);

    int mat[100][100];
    printf("Input the elements of the matrix : ");
    storeMatrix(mat, m, n);

    printf("The matrix is : \n");
    printMatrix(mat, m, n);

    return 0;
}