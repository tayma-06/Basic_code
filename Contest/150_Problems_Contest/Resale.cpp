#include<iostream>
#include<cmath>
using namespace std;
int maxDifference(int V[], int C[], int N, int index, int X, int Y){
    if(index == N){
        return max(0, X - Y);
    }
    int exclude = maxDifference(V, C, N, index + 1, X, Y);
    int include = maxDifference(V, C, N, index + 1, X + V[index], Y + C[index]);
    return max(exclude, include);
}
int main(){
    int N;
    cin >> N;
    int V[20], C[20];
    for(int i = 0; i < N; i++){
        cin >> V[i];
    }
    for(int i = 0; i < N; i++){
        cin >> C[i];
    }
    int result = maxDifference(V, C, N, 0, 0, 0);
    cout << result << endl;
}
