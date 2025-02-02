#include<iostream>
using namespace std;
void swap(int &x, int &y){
    // this function will change the positions of the indices
    int z = x;
    x = y;
    y = z;
}
int main(){
    int n;
    cin >> n;
    int a[n], index[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
        index[i] = i + 1;
    }
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(a[i] > a[j]) {
               swap(a[i], a[j]);   
               swap(index[i], index[j]);
            }
        }
    }
    for(int i = 0; i < n / 2; i++){
        cout << index[i] << " " << index[n - i - 1] << endl;
    }
    return 0;
}
