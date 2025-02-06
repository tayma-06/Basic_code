#include<iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int prices[n];
        for(int i = 0; i < n; i++){
            cin >> prices[i];
        }
        int badDaysNo = 0;
        int minimum_price = prices[n - 1];
        for(int i = n - 2; i >= 0; i--){
            if(prices[i] > minimum_price){
                badDaysNo++;
            }
            if(prices[i] < minimum_price){
                minimum_price = prices[i];
            }
        }
        cout << badDaysNo << endl;
    }
    return 0;
}
