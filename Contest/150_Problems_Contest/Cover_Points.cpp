#include<iostream>
using namespace std;
int main(){
    int n, x, y;
    cin >> n;
    cin >> x >> y;
    int x1 = x;
    int y1 = y;
    int max = x1 + y1;
    for(int i = 1; i < n; i++){
        cin >> x >> y;
        if(x >= x1 || y >= y1){
            x1 = x;
            y1 = y;
        }
        if(x1 + y1 > max)
           max = x1 + y1;
    }
    cout << max << endl;
    return 0;
}
