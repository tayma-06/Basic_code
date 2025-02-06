#include<iostream>
using namespace std;
int main(){
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    int diff_x = x2 - x1;
    int diff_y = y2 - y1;
    int x3, y3, x4, y4;
    x3 = x2 - diff_y;
    x4 = x1 - diff_y;
    y3 = y2 + diff_x;
    y4 = y1 + diff_x;
    cout << x3 << " " << y3 << " " << x4 << " " << y4 << endl;
    return 0;
}
