#include<iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        long long L, v, l, r;
        cin >> L >> v >> l >> r;
        long long totalLanterns = L / v;
        long long obstructedLanterns = (r / v) - ((l - 1) / v);
        long long visibleLanterns = totalLanterns - obstructedLanterns;
        cout << visibleLanterns << endl;
    }
    return 0;
}
