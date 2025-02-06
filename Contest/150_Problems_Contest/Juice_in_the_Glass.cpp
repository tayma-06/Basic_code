#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main(){
    int T;
    cin >> T;
    for(int i = 1; i <= T; i++){
        double r1, r2, h, p;
        cin >> r1 >> r2 >> h >> p;
        double r_top = (r1 - r2) * (p / h) + r2;
        // here the (r1-r2) * p/h says the change in the radius from bottom part so we add r2 collected from internet
        double volume = 1.0 / 3.0 * M_PI * p * (r_top * r_top + r_top * r2 + r2 * r2);
        cout << "Case " << fixed << setprecision(7) << i << ":" << " " << volume << endl;
    }
    return 0;
}
