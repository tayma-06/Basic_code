#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int k, a[12], total = 0; // total inch target k, monthly increament a
    cin >> k;
    for(int i = 0; i < 12; i++){
        cin >> a[i];
        total += a[i]; 
    }
    if(total < k){ // if total is less that k it is impossible to reach k
        cout << -1 << endl;
    }
    else{
        sort(a, a + 12, greater<int>()); // sorted in descending order i.e. we pick month with highest value first
        int sum = 0, month = 0;
        while(sum < k){
            sum += a[month];
            month += 1; /* increments until the sum of increment in length r
            reaches or exceeds k */
        }
        cout << month << endl;
    }
    return 0;
}
