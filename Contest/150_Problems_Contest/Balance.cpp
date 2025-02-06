#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int N;
    cin >> N;
    int weight[N];
    int sum = 0;
    for(int i = 0; i < N; i++){
        cin >> weight[i];
        sum += weight[i];
    }
    int S1 = 0, S2 = sum;
    int minimum_difference = abs(S2 - S1);
    for(int i = 1; i < N; i++){
        S1 += weight[i - 1];
        S2 -= weight[i - 1];
        int difference = abs(S2 - S1);
        if(difference < minimum_difference)
           minimum_difference = difference;
    }
    cout << minimum_difference << endl;
    return 0;
}
