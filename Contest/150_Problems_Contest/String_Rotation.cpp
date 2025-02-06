#include<iostream>
#include<string>
using namespace std;
int main(){
    string S, T;
    cin >> S >> T;
    if(S.length() != T.length()){
        cout << "No" << endl;
    }
    int n = S.length();
    string double_S = S + S;
    for(int i = 0; i < n; i++){
        bool is_Match = true;
        for(int j = 0; j < n; j++){
            if(double_S[i + j]  != T[j]){
                is_Match = false;
                break;
            }
        }
        if(is_Match){
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}
