#include <stdio.h> 
 
void mergeArrays(int arr1[], int n1, int arr2[], int n2) { 
    int i = 0, j = 0; 
    while (i < n1 && j < n2) { 
        if (arr1[i] < arr2[j]) { 
            printf("%d ", arr1[i]); 
            i++; 
} else { 
printf("%d ", arr2[j]); 
j++; 
} 
} 
while (i < n1) { 
printf("%d ", arr1[i]); 
i++; 
} 
while (j < n2) { 
printf("%d ", arr2[j]); 
j++; 
} 
printf("\n"); 
} 
int main() { 
int n1, n2, arr1[100], arr2[100]; 
scanf("%d", &n1); 
for (int i = 0; i < n1; i++) 
scanf("%d", &arr1[i]); 
scanf("%d", &n2); 
for (int i = 0; i < n2; i++) 
scanf("%d", &arr2[i]); 
mergeArrays(arr1, n1, arr2, n2); 
return 0; 
} 