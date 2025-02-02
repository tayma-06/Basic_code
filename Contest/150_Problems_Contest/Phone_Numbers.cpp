#include<iostream>
using namespace std;
int main(){
    int n;
    string cards;
    cin >> n;
    cin >> cards;
    int count_8 = 0;
    for(char c : cards){
        if (c == '8')
            count_8++;
    }
    int max = n / 11;
    if(count_8 < max)
       cout << count_8 << endl;
    else 
       cout << max << endl;
    return 0;
}
