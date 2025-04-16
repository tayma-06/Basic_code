#include<stdio.h>
int main()
{
    int n;
    printf("Enter student count : ");
    scanf("%d", &n);
    float marks[n];
    float totalMarks = 0;
    printf("Enter marks of each student : ");
    for(int i=0; i<n; i++)
    {
        scanf("%f", &marks[i]);
        totalMarks += marks[i];
    }
    float meanMarks = totalMarks / n;
    printf("Mean marks : %.2f\n", meanMarks);
    printf("Median marks : %.2f\n", n % 2 != 0 ? marks[((n + 1)/2) - 1] : (marks[((n+1)/2)-1]+ marks[(n/2)-1])/2);
    int q1, q3;
    if(n % 2 != 0){
        q1 = marks[(n+1)/4-1];
        q3 = marks[3*(n+1)/4-1];
    }
    else{
        q1=marks[n/4-1];
        q3=marks[3*n/4-1];
    }
    float IQR = q3-q1;
    printf("Interquartile Range : %.2f\n", IQR);
    printf("Outlier(s) : ");
    for(int i=0; i<n; i++){
        if(marks[i] < q1-1.5*IQR || marks[i]>q3+1.5*IQR){
            printf("%.2f ", marks[i]);
        }
    }
    printf("\n");
    return 0;
}