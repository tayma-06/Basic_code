#include<stdio.h>
void reverseArray(int *arr, int len);
int main(){
    int n;
    printf("Enter numbers of element : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements of the array : ");
    for(int *p=arr; p < arr+n; p++){
        scanf("%d", p);
    }
    reverseArray(arr,n);
    printf("Elements after reversing : ");
    for(int *p=arr; p < arr+n; p++) {
        printf("%d ", *p);
    }
    printf("\n");
}

void reverseArray(int *arr, int len)
{
    int*st=arr, *end=arr+len-1;
    while(st<=end){
        int temp = *st;
        *st=*end;
        *end=temp;
        st++; end--;
    }
}
