#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int T, m, l;// m = my position l = lift position
    cin >> T;
    for(int i = 1; i <= T; i++){
        cin >> m >> l;
        int total_time = abs(m - l) * 4 + 11 + m * 4 + 8;
        cout << "Case " << i << ":" << " " << total_time << endl;
    }
    return 0;
}
