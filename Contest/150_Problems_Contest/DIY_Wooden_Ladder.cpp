#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int T, n; // test cases & number of planks
    cin >> T;
    while(T--){
        cin >> n;
        int p[n]; // p = plank length
        for(int i = 0; i < n; i++){
            cin >> p[i];
        }
        if(n < 3){ // at least three planks needed to create a ladder
            cout << 0 << endl;
            continue;
        }
        sort(p, p + n); // sorting in ascending order
        // by sorting the largest plank length would be in [n-1] index and 
        // the second largest would be in [n-2] index
        int max_k = p[n - 2] - 1 < n - 2 ? p[n - 2] - 1 : n - 2;
        // the second largest plank is shorter among two so it's first base plank
        // here first base plank should be k + 1; so, k = p[n-2]-1
        // a ladder needs k+2 planks in total so the maximum limit is n-2
        cout << max_k << endl;
    }
    return 0;
}
