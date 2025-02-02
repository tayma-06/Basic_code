#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int q;
    cin >> q;
    while(q--){
        int n;
        cin >> n;
        int skills[n];
        for(int i = 0; i < n; i++){
            cin >> skills[i];
        }
        sort(skills, skills + n);
        bool two_teams = false;
        for(int i = 0; i < n - 1; i++){
            if(skills[i + 1] - skills[i] == 1){
                two_teams = true;
                break;
            }
        }
        if(two_teams) cout << "2" << endl;
        else cout << "1" << endl;
    }
    return 0;
}
