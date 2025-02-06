#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    if(n % 2 == 1){
        cout << 0 << endl;
    }
    else{
        int result = 1;
        for(int i = 0; i < n / 2; ++i){
            result *= 2;
        }
        cout << result << endl;
    }
    return 0;
}
