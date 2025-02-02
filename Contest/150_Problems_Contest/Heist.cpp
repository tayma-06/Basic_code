#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int k, min, max;
    cin >> k;
    min = max = k;
    for(int i = 0; i < (n - 1); i++){
        cin >> k;
        if(k < min)
           min = k;
        if(k > max)
           max = k;
    }
    int total_k = max - min + 1;
    int stolen_k = total_k - n;
    cout << stolen_k <<endl;
    return 0;
}
