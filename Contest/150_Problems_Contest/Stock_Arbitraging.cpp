#include<iostream>
using namespace std;
int main(){
    int n, m, r, s, b;
    cin >> n >> m >> r;
    int min = 1001, max = 0;
    while(n--){
        cin >> s;
        if(s < min) // shob theke kom taka diye kinbo
           min = s;
    }
    while(m--){
        cin >> b;
        if(b > max) // shob theke beshi taka diye bechbo
           max = b;
    }
    if(min >= max){
        cout << r << endl;
    }
    else{
        int result = r / min * max + r % min;
        // r / min the number of shares I can buy
        /* the boulers i can get after selling is obtained 
         by multiply it with the max */
        // the leftover boulers added r % min
        cout << result << endl;
    }
    return 0;
}
