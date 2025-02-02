#include<iostream>
using namespace std;
int main(){
    int q;
    cin >> q; // test cases
    while(q--){
        int n;
        cin >> n; // number of elements of multiset
        int s[n]; // Array to store the multiset
        int count = 0, total = 0; // count will count how many 
        // 2048 we have
        // total will sum all the numbers less than 2048
        for(int i = 0; i < n; i++){
            cin >> s[i];
            if(s[i] == 2048) count++;
            else if(s[i] < 2048) total += s[i];
        }
        if(count > 0 || total >= 2048)
        cout << "YES" << endl;
        else
        cout << "NO" << endl;
    }
    return 0;
}
