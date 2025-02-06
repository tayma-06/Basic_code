#include<iostream>
#include<string>
using namespace std;
int main(){
    int N;
    string S;
    cin >> N >> S;
    if(N % 2 != 0){
        cout << "No" << endl;
        return 0;
    }
    int mid = N / 2;
    bool isEqual = true;
    for(int i = 0; i < mid; i++){
        if(S[i] != S[mid + i]){
            isEqual = false;
            break;
        }
    }
    if(isEqual) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}
