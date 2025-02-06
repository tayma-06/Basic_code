#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    long long N, K;
    cin >> N >> K;
    long long H[N];
    for(int i = 0; i < N; i++){
        cin >> H[i];
    }
    sort(H, H + N);
    long long minimum_difference = 1000000000;
    for(long long i = 0; i <= N - K; i++){
        long long current_difference = H[i + K - 1] - H[i];
        if(current_difference < minimum_difference){
            minimum_difference = current_difference;
        }
    }
    cout << minimum_difference << endl;
    return 0;
}
