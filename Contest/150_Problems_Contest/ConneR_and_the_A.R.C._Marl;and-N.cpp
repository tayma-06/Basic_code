#include<iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, s, k;
        // n is total number of floors in building
        // s is the starting floor where I am standing
        // closed floors list is k
        cin >> n >> s >> k;
        const int RANGE = 1000; 
        bool isClosed[RANGE * 2 + 1] = {false};
        int offset = RANGE; 
        for(int i = 0; i < k; i++){
            int x;
            cin >> x; 
            if (x >= s - RANGE && x <= s + RANGE) {
                isClosed[x - s + offset] = true;
            }
        }
        int minimum_steps = 0;
        while(true){
            if(s - minimum_steps >= 1 && !isClosed[s - minimum_steps - s + offset]){ 
                // checking downwards
                cout << minimum_steps << endl;
                break;
            }
            if(s + minimum_steps <= n && !isClosed[s + minimum_steps - s + offset]){
                // checking upwards
                cout << minimum_steps << endl;
                break;
            }
            minimum_steps++;
        }
    }
    return 0;
}
