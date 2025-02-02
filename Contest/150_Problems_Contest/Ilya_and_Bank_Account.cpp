#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    if(n > 0){
       cout << n << endl;
    }
    else{
        int a = n / 10; // removes the last digit
        int b = (n / 100) * 10 + n % 10; // removes the second last digit
        if(a > b){
           cout << a << endl;
        }
        else{
           cout << b << endl;
        }
    }
    return 0;
}
