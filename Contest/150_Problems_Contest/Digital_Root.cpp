#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    while(n--){
        long long k, x; // can take x as int as well
        cin >> k >>x;
        long long result = ((k - 1) * 9) + x;
// digital root of n = (n - 1) % 9 + 1
// common difference is 9 
// 38 - 3+8=11 - 1+1=2 here common difference is 9
// 19 - 1+9=10 - 1+0=1
// for k=1, 1st num with digital root simply 1
// for k=2, x+9 
// for k=3, x+18 and so on
        cout << result << endl;
    }
}
