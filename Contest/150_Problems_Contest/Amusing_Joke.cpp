#include<iostream>
#include<cstring>
using namespace std;
void bubbleSortString(string &str){
    int len = str.length();
    for(int i = 0; i < len - 1; i++){
        for(int j = 0; j < len - i - 1; j++){
            if(str[j] > str[j + 1]){
                char temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
            }
        }
    }
}
int main(){
    string word1, word2, jumbled;
    cin >> word1 >> word2 >> jumbled;
    string together = word1 + word2;
    bubbleSortString(together);
    bubbleSortString(jumbled);
    if(together == jumbled)
       cout << "YES" << endl;
    else
       cout << "NO" << endl;
    return 0;
}
