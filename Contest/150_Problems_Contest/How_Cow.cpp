#include<iostream>
using namespace std;
int main(){
    int T;
    cin >> T;
    for(int i = 1; i <= T; i++){
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        int M; // number of cows
        cin >> M;
        cout << "Case " << i << ":" << endl;
        for(int j = 0; j < M; j++){
            int x, y;
            cin >> x >> y;
            if(x > x1 && x < x2 && y > y1 && y < y2)
               cout << "Yes" << endl;
            else
               cout << "No" << endl;
        }
    }
    return 0;
}
