#include<iostream>
#include<cmath>
#include<cfloat>
using namespace std;
int main(){
    int N;
    cin >> N;
    double T, A;
    cin >> T >> A;
    double min_diff = DBL_MAX; // for largest possible double value
    // for this information i took help from google
    int suitable = 0;
    for(int i = 1; i <= N; i++){
        int H;
        cin >> H;
        double temp = T - H * 0.006;
        double diff = abs(temp - A);
        if(diff < min_diff){
            min_diff = diff;
            suitable = i;
        }
    }
    cout << suitable << endl;
    return 0;
}
