#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin >> n;
    int price[n]; 
    for(int i = 0; i < n; i++){
        cin >> price[i];
    }
    sort(price, price + n);
    int result = price[n-1] / 2;
    for(int i = 0; i < n - 1; i++){
        result += price[i];
    }
    cout << result << endl;
}
