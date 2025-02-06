#include<iostream>
using namespace std;
int main(){
    int S;
    cin >> S;
    int A = S / 100; // first two digits
    int B = S % 100; // last two digits
    bool isMMYY = false;
    if(1 <= A && A <= 12) isMMYY = true;
    bool isYYMM = false;
    if(1 <= B && B <= 12) isYYMM = true;
    if(isYYMM && isMMYY) cout << "AMBIGUOUS" << endl;
    else if(isYYMM) cout << "YYMM" << endl;
    else if(isMMYY) cout << "MMYY" << endl;
    else cout << "NA" << endl;
    return 0;
}
