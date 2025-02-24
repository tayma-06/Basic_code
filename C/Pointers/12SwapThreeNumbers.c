#include<stdio.h>
void swap(int*a, int*b, int*c){
    int temp=*b;
    *b=*a;
    *a=*c;
    *c=temp;
}
int main(){
    int a,b,c;
    printf("Input the 1st element : ");
    scanf("%d", &a);
    printf("Input the 2nd element : ");
    scanf("%d", &b);
    printf("Input the 3rd element : ");
    scanf("%d", &c);
    printf("The value before swapping are : \n");
    printf("element 1 = %d\n", a);
    printf("element 2 = %d\n", b);
    printf("element 3 = %d\n", c);
    swap(&a, &b, &c);
    printf("The value after swapping are : \n");
    printf("element 1 = %d\n", a);
    printf("element 2 = %d\n", b);
    printf("element 3 = %d\n", c);
    return 0;
}