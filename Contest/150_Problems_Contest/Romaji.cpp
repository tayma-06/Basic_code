#include<iostream>
using namespace std;
bool isVowel(char c){
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
       return true;
    else
       return false;
}
int stringlength(string str){
    int len = 0;
    while(str[len] != '\0'){
          len++;
    }
    return len;
}
int main(){
    string s;
    cin >> s;
    int len = stringlength(s);
    for(int i = 0; i < len; i++){
        if(isVowel(s[i]) || s[i] == 'n') continue;
        if(i == len - 1){
            cout << "NO" << endl;
            return 0;
        }
        if(!isVowel(s[i + 1])){
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}
