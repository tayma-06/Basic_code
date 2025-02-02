#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int b = 4;
    int a = b + n;
    while(true){
        bool iscomposite_a = false;
        bool iscomposite_b = false;
        for(int i = 2; i * i <= a; i++){
            if(a % i == 0){
                iscomposite_a = true;
                break;
            }
        }
        for(int i = 2; i * i <= b; i++){
            if(b % i == 0){
                iscomposite_b = true;
                break;
            }
        }
        if(iscomposite_a && iscomposite_b){
            break;
        }
        b++;
        a = b + n;
    }
    cout << a << " " << b << endl;
    return 0;
}
