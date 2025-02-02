#include<iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        long long x;
        cin >> x;
        if (x >= 14 && (x % 14 >= 1 && x % 14 <= 6)){ 
// the four sides that can be seen from sides contains a total of 14 pips
// therefore 14 is always contanst + anything that is on the top of the tower
            cout << "YES" << endl;
        } 
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}
