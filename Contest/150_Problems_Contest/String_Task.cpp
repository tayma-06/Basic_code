#include<iostream>
using namespace std;
char tolower(char ch){
    if(ch >= 'A' && ch <= 'Z'){
        ch = 'a' + (ch - 'A');
    }
    return ch;
}
bool isVowel(char ch){
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'y') 
       return true;
    else
       return false;
}
int main(){
    string s, result = "";
    cin >> s;
    for(char ch : s){
        ch = tolower(ch);
        if(!isVowel(ch)){
            result += '.';
            result += ch;
        }
    }
    cout << result << endl;
    return 0;
}
