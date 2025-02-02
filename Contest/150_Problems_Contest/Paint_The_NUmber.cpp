#include<iostream>
using namespace std;
void bubblesort(int arr[], int size){
    for(int i = 0; i < size - 1; i++){
        bool swapped = false;
        for(int j = 0; j < size - i - 1; j++){
            if(arr[j] > arr[j + 1]){
                int temp = arr [j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = true;
            }
        }
        if(!swapped)
           break;
    }
}
int main(){
    int n, a[100], used[100] = {0};
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i]; // storing all the colors in an array
    }
    bubblesort(a, n); // sorting them
    int colors = 0; 
    for(int i = 0; i < n; i++){
        if(a[i] != 0){ // we are adding a the colors
        // if statement ensures same color isn't counted
        // for example if 2 is counted then later
        // 2 or it's multiple won't be counted
            colors++;
            int a1 = a[i]; // storing the element so I don't mess up again
           for(int j = 0; j < n; j++){
               if((a[j] % a1 == 0))
                   a[j] = 0; // marking the element as already taken
                   // that way it increment color during the if statement
           }
        }
    }
    cout << colors << endl;
    return 0;
}
