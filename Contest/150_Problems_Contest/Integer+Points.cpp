#include<iostream>
using namespace std;
int main(){
    long long  t, n, m, p, q;
    cin >> t;
    while(t--){
        cin >> n;
        long long evenDLS = 0, oddDLS = 0;
        while(n--){
            cin >> p;
            if(p % 2 == 0) evenDLS++;
            else oddDLS++;
        }
        cin >> m;
        long long evenJLS = 0, oddJLS = 0;
        while(m--){
            cin >> q;
            if(q % 2 == 0) evenJLS++;
            else oddJLS++;
        }
        long long ans = evenDLS * evenJLS + oddDLS * oddJLS;
        cout << ans << endl;
    }
    return 0;
}
