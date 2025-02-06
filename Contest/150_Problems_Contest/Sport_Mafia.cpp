#include<iostream>
using namespace std;
int main(){
    long long n, k;
    cin >> n >> k; // n is the total moves and k is the number of candies at the end 
    long long p = 0, a = 0; // is the put count and a is the ate count
    while(p * (p + 1) / 2 - (n - p) != k){ 
        // if put count is 3 total candies is 1+2+3 = 6
        // i.e total added candies = p*(p+2)/2
        // total candies ate = added - left 
        // e = added - k
        // e = n - p
        // added - k = n - p
        // k = (added) - (n - p)
        // p*(p+1)/2-(n-p) = k
        p++; 
    }
    a = n - p; 
    cout << a << endl;
    return 0;
}
