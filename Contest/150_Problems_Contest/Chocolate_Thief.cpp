#include<iostream>
#include<string>
#include<climits>

using namespace std;

int main(){
    int T;
    cin >> T;
    for(int i =1; i <= T; i++){
        int n;
        cin >> n;
        string t, v;
        int maxVol = INT_MIN, minVol = INT_MAX;
        for(int j = 0; j < n; j++){
            int l, w, h;
            string n;
            cin >> n >> l >> w >> h;
            int vol = l * w * h;
            if(vol > maxVol){
                maxVol = vol;
                t = n;
            }
            if(vol < minVol){
                minVol = vol;
                v = n;
            }
        }
        cout << "Case " << i << ": ";
        if(maxVol == minVol)
            cout << "no thief" << endl;
        else
            cout << t << " took chocolate from " << v << endl;
    }
    return 0;
}
