#include <iostream>
using namespace std;
int main(){
    int t;
    cin >> t; 
    while(t--){
        long long A, B;
        cin >> A >> B;
        int count_b = 0;
        long long b = 9;  
        while(b <= B){
            count_b++;
            b = b * 10 + 9; 
        }
        cout << count_b * A << endl;
    }
    return 0;
}
