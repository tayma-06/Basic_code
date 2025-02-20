#include<stdio.h>
void bubbleSort(int arr[], int length){
    int n=length;
    for(int i=0; i<n;i++){
        for(int j=n-1; j>=i+1; j--){
            if(arr[j]<arr[j-1]){
                int temp=arr[j-1];
                arr[j-1]=arr[j];
                arr[j]=temp;
            }
        }
    }
}
int main(){
    int n;
    printf("Enter array length: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter values for the array: ");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    bubbleSort(arr, n);
    printf("Sorted Array: {");
    for(int i=0; i<n; i++){
        if(i==n-1) printf("%d", arr[i]);
        else printf("%d, ", arr[i]);
    }
    printf("}");
    return 0;
}
