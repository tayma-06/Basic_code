#include<iostream>
using namespace std;
int main(){
    int n, side;
    cin >> n >> side;
    int side_max = side, total = side;
    for(int i = 0; i < (n - 1); i++){
        cin >> side;
        total += side;
        if(side > side_max)
           side_max = side;
    }
    if(side_max < (total-side_max))
       cout << "Yes" << endl;
    else
       cout << "No" << endl;
    return 0;
}
