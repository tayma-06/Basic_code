#include<iostream>
using namespace std;
int countOne(int num){
    int count = 0;
    while (num > 0) {
        if (num % 2 == 1)
        count++;
        num /= 2; 
    }
    return count;
}
int main(){
    int T;
    cin >> T;
    for(int i = 1; i <= T; i++){
        int n;
        cin >> n;
        int count = countOne(n);
        if(count % 2 == 0) cout << "Case " << i << ": even" << endl;
        else cout << "Case " << i << ": odd" << endl;
    }
    return 0;
}
