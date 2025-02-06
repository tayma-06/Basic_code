#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main(){
    int T;
    cin >> T;
    for(int i = 1; i <= T; i++){
        long double R;
        int n;
        cin >> R >> n;
        long double sin_value = sin(M_PI / n);
        long double r = (R * sin_value) / (1 + sin_value);
        cout << "Case " << i << ": " << fixed << setprecision(10) << r << endl;
    }
    return 0;
}
