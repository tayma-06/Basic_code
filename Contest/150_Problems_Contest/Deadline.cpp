#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int T;
    cin >> T;
    while(T--){
        long long n, d;
        /* has n days to run a special program
        needs d days to run */
        cin >> n >> d;
        if(d <= n){
            cout << "YES" << endl;
            continue;
        }
        bool possible = false;
        long long l = sqrt(d);
        for(long long x = 0; x <= l; x++){
            /* long long optimized_time = (d + (x + 1) - 1) / (x + 1); 
            // manually determines the ceil value */
            long long optimized_time = ceil((double)d / (x + 1));
            /* the ceil function will manually round up the optimized time
            i.e if the time is 2.5 it will round u to 3 days */
            long long time_needed = x + optimized_time;
            if(time_needed <= n){
                possible = true;
                break;
            }
        }
        if(possible){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}
