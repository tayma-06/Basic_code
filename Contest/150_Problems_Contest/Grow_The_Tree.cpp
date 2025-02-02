#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    long long n;
    cin >> n;
    long long sticks[n];
    for(long long i = 0; i < n; i++){
        cin >> sticks[i];
    }
    sort(sticks, sticks + n);
    long long  x = 0, y = 0;
    for(long long i = 0; i < n / 2; i++){
        x += sticks[i];
    }
    for(long long i = n / 2; i < n; i++){
        y += sticks[i];
    }
    long long result = x * x + y * y;
    cout << result << endl;
    return 0;
}
