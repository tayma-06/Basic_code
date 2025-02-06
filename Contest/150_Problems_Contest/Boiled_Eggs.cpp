#include<iostream>
using namespace std;
int main(){
    int T;
    cin >> T;
    for(int i = 1; i <= T; i++){
        int n, P, Q;
        cin >> n >> P >> Q;
        int weight[30];
        for(int j = 0; j < n; j++){
            cin >> weight[j];
        }
        int count = 0, total_weight = 0;
        for(int j = 0; j < n; ++j){
            if(count + 1 <= P && total_weight + weight[j] <= Q){
               count++;
               total_weight += weight[j];
            } 
            else{
                break;
            }
        }
        cout << "Case " << i << ": " << count << endl;
    }
    return 0;
}
