#include<iostream>
using namespace std;
int main(){
    long long a, b;
    cin >> a >> b;
    long long minimum = (a < b) ? a : b;
    long long GCD = 1;
    for(long long i = 1; i <= minimum; i++){
        GCD *= i;
    }
    cout << GCD << endl;
    return 0;
}
