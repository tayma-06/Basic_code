#include<iostream>
#include<string>
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
    string math;
    cin >> math;
    string num;
    for(char n : math){
        if(n != '+')
        num += n;
    }
    bubbleSortString(num);
    int i = 0;
    for(char &n : math){
        if(n != '+'){
           n = num[i];
           i++;
        }
    }
    cout << math << endl;
    return 0;
}
