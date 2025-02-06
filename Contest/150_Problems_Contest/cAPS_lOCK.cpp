#include<iostream>
using namespace std;
int main(){
    string word;
    cin >> word;
    int len = 0;
    for(char c : word){
        len++;
    }
    bool change = true;
    for(int i = 1; i < len; i++){
        if(word[i] >= 'a' && word[i] <= 'z'){
           change = false;
           break;
        }
    }
    if(change){
       for(int i = 0; i < len; i++){
           if(word[i] >= 'a' && word[i] <= 'z')
              word[i] = toupper(word[i]);
           else
              word[i] = tolower(word[i]);
       }
    }
    cout << word <<endl;
    return 0;
}
