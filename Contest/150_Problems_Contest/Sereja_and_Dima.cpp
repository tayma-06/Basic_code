#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin >> n;
    long long arr[n]; 
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int left = 0, right = n - 1;
    int score_s = 0, score_d = 0;
    for(int i = 0; i < n; i++){
        int chosen;
        if(arr[left] > arr[right]){
            chosen = arr[left];
            left++;
        }
        else{
            chosen = arr[right];
            right--;
        }
        if(i % 2 == 0){
            score_s += chosen;
        }
        else{
            score_d += chosen;
        }
    }
    cout << score_s << " " << score_d << endl;
    return 0;
}
