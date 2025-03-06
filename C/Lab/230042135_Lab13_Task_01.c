#include <stdio.h>
double dotProduct(double *row, double *col, int len, int numCols);
int main()
{
    int row, col;
    printf("Enter number of rows and columns : ");
    scanf("%d %d", &row, &col);
    double arr[row][col];
    printf("Enter the elements of the array : ");
    for (double *p = &arr[0][0]; p < arr[0] + (row * col); p++)
    {
        scanf("%lf", p);
    }
    double *q = arr[0], *r = arr[0];
    double dot_Product = dotProduct(q, r, row, col);
    printf("Dot Product is : %lf", dot_Product);
    return 0;
}

double dotProduct(double *row, double *col, int len, int numCols)
{
    double *q = row, *r = col, product = 0;
    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < numCols; j++)
        {
            product += (*q) * (*r);
            r += numCols;
            q++;
        }
    }
    return product;
}
