#include<iostream>
#include<string>
using namespace std;
int main(){
    int q; // test cases
    cin >> q;
    while(q--){
        int n; // sequence length
        string s; // the sequence 
        cin >> n >> s;
        if(n == 2 && s[0] >= s[1]){
        // if two digits then they are not increasing
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
            cout << 2 << endl; // two parts
            cout << s[0] << " ";
            for(int i = 1; i < n; i++){
                cout << s[i];
            }
        }
        cout << endl;
    }
    return 0;
}
