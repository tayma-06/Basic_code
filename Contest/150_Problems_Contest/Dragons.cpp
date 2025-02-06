#include<iostream>
using namespace std;
int main(){
    int s, n;
    cin >> s >> n;
    int x[1000], y[1000];
    for(int i = 0; i < n; i++){
        cin >> x[i] >> y[i];
    }
    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - i - 1; j++){
            if(x[j] > x[j + 1]){
                int temp = x[j];
                x[j] = x[j + 1];
                x[j + 1] = temp;
                
                temp = y[j];
                y[j] = y[j + 1];
                y[j + 1] = temp;
            }
        }
    }
    bool can_defeat = true;
    for(int i = 0; i < n; i++){
        if(s > x[i]){
            s += y[i];
        }
        else{
            can_defeat = false;
        }
    }
    if(can_defeat){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    return 0;
}
