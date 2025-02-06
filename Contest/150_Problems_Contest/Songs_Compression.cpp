#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    long long n, m;
    cin >> n >> m;
    long long total_size = 0, saved[n] = {0}, count = 0;
    for(long long i = 0; i < n; i++){
        long long a, b;
        cin >> a >> b;
        saved[i] = a - b;
        total_size += a;
    }
    if(total_size <= m){
        cout << "0" << endl;
        return 0;
    }
    sort(saved, saved + n, greater<int>()); // descending order
    for(long long i = 0; i < n; i++){
        total_size -= saved[i];
        count++;
        if(total_size <= m){
            cout << count << endl;
            return 0;
        }
    }
    cout << "-1" << endl;
    return 0;
}
