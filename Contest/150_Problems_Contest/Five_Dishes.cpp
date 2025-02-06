#include<iostream>
#include<climits>
using namespace std;
int main(){
    int times[5];
    for(int i = 0; i < 5; i++){
        cin >> times[i];
    }
    int minimumTime = INT_MAX;
    for(int i = 0; i < 5; i++){
        int totalTime = 0;
        for(int j = 0; j < 5; j++){
            if(j != i){
                totalTime += (times[j] + 9) / 10 * 10;
            }
            else{
                totalTime += times[j];
            }
        }
        minimumTime = (minimumTime < totalTime ? minimumTime : totalTime);
    }
    cout << minimumTime << endl;
    return 0;
}
