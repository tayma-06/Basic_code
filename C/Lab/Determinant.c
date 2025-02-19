#include <stdio.h>
double getDeterminant(double inMat[][3])
{
    double determinant = inMat[0][0] * (inMat[1][1] * inMat[2][2] - inMat[1][2] * inMat[2][1]) - inMat[0][1] * (inMat[1][0] * inMat[2][2] - inMat[1][2] * inMat[2][0]) + inMat[0][2] * (inMat[1][0] * inMat[2][1] - inMat[1][1] * inMat[2][0]);
    return determinant;
}
int main()
{
    double inMat[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    double determinant = getDeterminant(inMat);
    printf("%f", determinant);
    return 0;
}