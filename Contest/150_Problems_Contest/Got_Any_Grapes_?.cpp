#include<iostream>
using namespace std;
int main(){
    int x, y, z, a, b, c;
    cin >> x >> y >> z;
    cin >> a >> b >> c;
    if(a >= x){
       a -= x;
    }
    else{
        cout << "NO" << endl;
        return 0;
    }
    if(b + a >= y){
       b = b + a - y;
       a = 0;
    }
    else{
        cout << "NO" << endl;
        return 0;
    }
    if(c + b >= z){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    return 0;
    
}
