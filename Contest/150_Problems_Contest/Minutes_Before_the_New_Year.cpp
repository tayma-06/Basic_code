#include<iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    int hh, mm;
    for(int i = 0; i < t; i++){
        cin >> hh >> mm;
        int hh1 = (23 - hh) * 60;
        int mm1 = (60 - mm);
        int totalmm = hh1 + mm1;
        cout << totalmm << endl;
    }
    return 0;
}
