#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cin >> n;
    string arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - i - 1; j++){
            if(arr[j].size() > arr[j + 1].size()){
                string temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for(int i = 1; i < n; i++){
        bool isSubstring = false;
        for(int j = 0; j <= arr[i].size() - arr[i - 1].size(); j++){
            bool match = true;
            for(int k = 0; k < arr[i - 1].size(); k++){
                if(arr[i][j + k] != arr[i - 1][k]){
                    match = false;
                    break;
                }
            }
            if(match){
                isSubstring = true;
                break;
            }
        }
        if(!isSubstring){
           cout << "NO" << endl;
           return 0;
        }
    }
    cout << "YES" << endl;
    for(int i = 0; i < n; i++){
        cout << arr[i] << endl;
    }
    return 0;
}
