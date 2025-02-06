#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char s[101];
    cin >> s; 
    int count_0 = 0, count_1 = 0;
    for(int i = 0; i <strlen(s); i++){
        if(s[i] == '0'){
            count_0++;
            count_1 = 0;
        }
        else if(s[i] == '1'){
            count_0 = 0;
            count_1++;
        }
        if(count_0 >= 7 || count_1 >= 7){
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
    return 0;
}
