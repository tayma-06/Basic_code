#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int maximum_length = 1, current_length = 1;
    for(int i = 1; i < n; i++){
        if(a[i] >= a[i - 1]){
            current_length++;
        }
        else{
            current_length = 1;
        }
        if(current_length > maximum_length){
            maximum_length = current_length;
        }
    }
    cout << maximum_length << endl;
    return 0;
}
