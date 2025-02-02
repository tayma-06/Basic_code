#include<iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        long long a, b, c, r;
        cin >> a >> b >> c >> r;
        if(a > b) swap(a, b);
        long long s = c - r; // start 
        long long e = c + r; // end
        long long s_overlap = max(a, s); // max between a and starting point
        long long e_overlap = min(b, e); // min between b and ending point
        long long overlap = max(0LL, e_overlap - s_overlap); // discarding any negative value
        // if any negative value then zero is considered
        long long total_d = b - a; // total distance
        long long uncovered = total_d - overlap; // if we subtract the overlap part from the
        // total distance then we get the uncovered part
        cout << uncovered << endl;
    }
    return 0;
}
