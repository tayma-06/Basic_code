#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    long long H, L;
    cin >> H >> L;
    long double A = ((L * L) - (H * H)) / (2.0 * H);
    cout << fixed << setprecision(7) << A;
}
