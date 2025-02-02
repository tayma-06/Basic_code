#include<iostream>
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
using namespace std;
int main(){
    int a, b, c;
    cin >> a >> b >> c;
    int arr[] = {a, b, c};
    bubblesort(arr , 3);
    int med = arr[1];
    int d = abs(a - med) + abs(b - med) + abs(c - med);
    cout << d << endl;
    return 0;
}
