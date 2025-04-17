#include <stdio.h>

// 1. Matrix Addition
void addMatrix(int *A, int *B, int *C, int m, int n)
{
    for (int i = 0; i < m * n; i++)
    {
        *(C + i) = *(A + i) + *(B + i);
    }
}

// 2. Matrix Subtraction
void subtractMatrix(int *A, int *B, int *C, int m, int n)
{
    for (int i = 0; i < m * n; i++)
    {
        *(C + i) = *(A + i) - *(B + i);
    }
}

// 3. Transpose
void transpose(int *in, int *out, int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            *(out + j * m + i) = *(in + i * n + j);
        }
    }
}

// 4. Matrix Multiplication
void multiplyMatrix(int *A, int *B, int *C, int m, int n, int p)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < p; j++)
        {
            int sum = 0;
            for (int k = 0; k < n; k++)
            {
                sum += *(A + i * n + k) * *(B + k * p + j);
            }
            *(C + i * p + j) = sum;
        }
    }
}

// 5. Sum of All Elements
int sumMatrix(int *matrix, int rows, int cols)
{
    int sum = 0;
    for (int i = 0; i < rows * cols; i++)
    {
        sum += *(matrix + i);
    }
    return sum;
}

// 6. Max Element
int maxMatrix(int *matrix, int rows, int cols)
{
    int max = *matrix;
    for (int i = 1; i < rows * cols; i++)
    {
        if (*(matrix + i) > max)
            max = *(matrix + i);
    }
    return max;
}

// 7. Scalar Multiplication
void scalarMultiply(int *matrix, int rows, int cols, int scalar)
{
    for (int i = 0; i < rows * cols; i++)
    {
        *(matrix + i) *= scalar;
    }
}

// 8. Check Symmetric
int isSymmetric(int *matrix, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (*(matrix + i * n + j) != *(matrix + j * n + i))
                return 0;
        }
    }
    return 1;
}

// 9. Identity Matrix Check
int isIdentity(int *matrix, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if ((i == j && *(matrix + i * n + j) != 1) ||
                (i != j && *(matrix + i * n + j) != 0))
                return 0;
        }
    }
    return 1;
}

// 10. Diagonal Sum
void diagonalSum(int *matrix, int n, int *primarySum, int *secondarySum)
{
    *primarySum = 0;
    *secondarySum = 0;
    for (int i = 0; i < n; i++)
    {
        *primarySum += *(matrix + i * n + i);
        *secondarySum += *(matrix + i * n + (n - 1 - i));
    }
}

// Example main for testing
int main()
{
    int A[2][2] = {{1, 2}, {3, 4}};
    int B[2][2] = {{5, 6}, {7, 8}};
    int C[2][2];

    addMatrix(&A[0][0], &B[0][0], &C[0][0], 2, 2);
    printf("Addition Result:\n");
    for (int i = 0; i < 4; i++)
    {
        printf("%d ", *((int *)C + i));
    }
    printf("\n");

    return 0;
}
