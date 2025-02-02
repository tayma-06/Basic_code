#include<iostream>
using namespace std;
int main(){
    int n;
    char color;
    cin >> n;
    cin >> color;
    char c1 = color;
    int count = 0;
    for(int i = 1; i < n; i++){
        cin >> color;
        if(c1 == color)
           count++;
        c1 = color;
    }
    cout << count << endl;
    return 0;
}
