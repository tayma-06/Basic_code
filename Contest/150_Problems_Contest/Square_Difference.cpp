// I learned to use function just yesterday
// So this is the first time I'm using functions in a code
// to solve a problem
#include<iostream>
#include<cmath>
using namespace std;
bool primecheck(long long n){ // for checking if a number is prime or not
    if(n <= 1) return false;
    for(long long i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        long long a, b;
        cin >> a >> b;
        if (abs(a - b) == 1 && primecheck(a + b))
        /* after hours of thinking came up with this one. 
        Here I discovered a pattern and implemented it.
        ... Searched in google for prime checking laws and 
        implemented after understanding it.
        And it worked */
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
