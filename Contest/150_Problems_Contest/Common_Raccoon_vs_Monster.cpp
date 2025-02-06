#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    long long H;// monster's health
    int N;// number of moves
    cin >> H >> N;
    int A[N];// power of each move
    for(int i = 0; i < N; i++){
        cin >> A[i];
    }
    sort(A, A + N, greater<int>()); // sorts in descending order
    long long sum = 0;
    for(int i = 0; i < N; i++){ // calculates the damage to the monster
        sum += A[i];
        if (sum >= H){
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
    }
