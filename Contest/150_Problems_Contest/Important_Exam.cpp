#include<iostream>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    char ans[n][m];
    int marks[m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> ans[i][j];
        }
    }
    for(int j = 0; j < m; j++){
        cin >> marks[j];
    }
    int total = 0;
    for(int j = 0; j < m; j++){
        int countA = 0, countB = 0, countC = 0, countD = 0, countE = 0;
        for(int i = 0; i < n; i++){
            if(ans[i][j] == 'A') countA++;
            else if(ans[i][j] == 'B') countB++;
            else if(ans[i][j] == 'C') countC++;
            else if(ans[i][j] == 'D') countD++;
            else if(ans[i][j] == 'E') countE++;
        }
        int max = countA;
        if(countB > max) max = countB;
        if(countC > max) max = countC;
        if(countD > max) max = countD;
        if(countE > max) max = countE;
        total += max * marks[j];
    }
    cout << total << endl;
    return 0;
}
