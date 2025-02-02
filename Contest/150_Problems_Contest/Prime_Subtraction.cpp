#include<iostream>
using namespace std;
int main(){
    int t;
    long long x, y;
    cin >> t; 
    while(t--){
        cin >> x >> y;
// 6-5=1; non-prime but 7-5=2, 8-5=3, 9-5=2+2, 10-5=5, 11-5=3+3
// 12-5=7, 13-5=2+2+2, 14-5=3+3+3
        if(x - y == 1){
            cout << "NO" << endl;
        } 
        else{
            cout << "YES" << endl;
        }
        
    }
}
