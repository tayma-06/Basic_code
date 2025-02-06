#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int N, K;
    cin >> N >> K;
    long long H[N];
    long long result = 0;
    for(int i = 0; i < N; i++){
        cin >> H[i];
    }
    sort(H, H + N, greater<int>());
    if(N <= K){
        cout << 0 << endl;
        return 0;
    }
    else{
        for(int i = K; i < N; i++){
            result += H[i];
        }
        cout << result << endl;
    }
    return 0;
}
