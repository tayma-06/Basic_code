#include <stdio.h>
double dotProduct(double *row, double *col, int len, int numCols);
void matrixMultiply(int m, int n, int p, double A[][n], double B[][p], double C[][p]);
int main()
{
    int m, n, p;
    printf("Enter numbers : ");
    scanf("%d %d %d", &m, &n, &p);
    double A[m][n], B[n][p], C[m][p];
    printf("Enter the elements of the first matrix : ");
    for (double *p = &A[0][0]; p < A[0] + (m * n); p++)
    {
        scanf("%lf", p);
    }
    printf("Enter the elements of the second matrix : ");
    for (double *q = &B[0][0]; q < B[0] + (n * p); q++)
    {
        scanf("%lf", q);
    }
    matrixMultiply(m, n, p, A, B, C);
    printf("Multiplication of the Two Matrices : \n");
    for (double *r = &C[0][0]; r < C[0] + (m * p); r++)
    {
        printf("%lf ", *r);
    }
    return 0;
}

double dotProduct(double *row, double *col, int len, int numCols)
{
    double *q = row, *r = col, product = 0;
    for (int i = 0; i < len; i++)
    {
        product += (*q) * (*r);
        q++;
        r += numCols;
    }
    return product;
}

void matrixMultiply(int m, int n, int p, double A[][n], double B[][p], double C[][p])
{
    int i = 0, j = 0;
    double *a = A[0], *b = B[0];
    for (double *r = &C[0][0]; r < C[0] + (m * p); r++)
    {
        *r = dotProduct(a + i, b + j, m, p);
        j++;
        if (j == p)
        {
            j = 0;
            i++;
        }
    }
}
