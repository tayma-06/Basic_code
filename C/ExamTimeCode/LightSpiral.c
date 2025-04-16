#include<stdio.h>
int main()
{
    int n;
    printf("Enter dimension N : ");
    scanf("%d", &n);
    int arr[n][n];
    printf("Enter Matrix [%dx%d] : ", n, n);
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    int mat[n*n], a=0;
    int top=0, bottom=n-1, left=0, right=n-1;
    while(top <= bottom && left <= right){
        for(int i = left; i <= right; i++){
            mat[a++] = arr[top][i];
        }
        top++;
        for(int i = top; i <= bottom; i++){
            mat[a++] = arr[i][right];
        }
        right--;
        if(top <= bottom){
            for(int i=right; i>=left; i--){
                mat[a++] = arr[bottom][i];
            }
            bottom--;
        }
        if(left <= right){
            for(int i=bottom; i>=top; i--){
                mat[a++] = arr[i][left];
            }
            left++;
        }
    }
    printf("Matrix that Light reads [%dx%d] : \n", n, n);
    for(int i=0; i<n*n; i++){
        if(i == 0) printf("|");
        else if(i!=0 && i != n*n-1 && i % n == 0) printf("    |\n|");
            printf("%6d", mat[i]);
            if(i==n*n-1) printf("    |");
    }
    return 0;
}