#include<iostream>
using namespace std;
int main(){
    int N;
    cin >> N;
    int count = 0;
    for(int i = 1; i <= N; i++){
        int digits = 0;
        int temp = i;
        while(temp > 0){
            temp /= 10;
            digits++;
        }
        if(digits % 2 == 1){
            count++;
        }
    }
    cout << count << endl;
    return 0;
}
