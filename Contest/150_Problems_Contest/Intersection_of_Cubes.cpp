#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int T;
    cin >> T;
    for(int case_number = 1; case_number <= T; case_number++){
        int n;
        cin >> n;  
        int cubes[100][6];
        for(int i = 0; i < n; i++){
            for(int j = 0; j < 6; j++){
                cin >> cubes[i][j];
            }
        }
        int x1_int = cubes[0][0], y1_int = cubes[0][1], z1_int = cubes[0][2];
        int x2_int = cubes[0][3], y2_int = cubes[0][4], z2_int = cubes[0][5];
        for (int i = 1; i < n; i++){
            x1_int = max(x1_int, cubes[i][0]);
            y1_int = max(y1_int, cubes[i][1]);
            z1_int = max(z1_int, cubes[i][2]);
            x2_int = min(x2_int, cubes[i][3]);
            y2_int = min(y2_int, cubes[i][4]);
            z2_int = min(z2_int, cubes[i][5]);
            if(x1_int >= x2_int || y1_int >= y2_int || z1_int >= z2_int){
               x1_int = y1_int = z1_int = x2_int = y2_int = z2_int = 0;
               break;
            }
        }
        long long volume = 0;
        if(x1_int < x2_int && y1_int < y2_int && z1_int < z2_int){
           volume = (long long)(x2_int - x1_int) * (y2_int - y1_int) * (z2_int - z1_int);
        }
        cout << "Case " << case_number << ": " << volume << endl;
    }
    return 0;
}
