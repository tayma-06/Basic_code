#include<iostream>
#include<string>
using namespace std;
string tobin(int num){
    /* This function converts a decimal num into 8 bit binary number */
    string bin = "";
    for(int i = 0; i < 8; i++){
        bin = char((num % 2) + '0') + bin; 
        /* Adding the '0' to convert the result i.e. either 0 or 1 into a 
        character
        And adding the expression before bin allows the position to be correct */
        num /= 2;
    }
    return bin;
}
string dectobin(string decIP){
    string binIP = "";
    int val = 0;
    for(char ch : decIP){
        if(ch == '.'){
            binIP += tobin(val) + ".";
            val = 0;
        }
        else{
            val = val * 10 + (ch - '0'); 
        }
    }
    binIP += tobin(val);
    return binIP;
}
int main(){
    int T;
    cin >> T;
    for(int i = 1; i <= T; i++){
        string decIP, binIP;
        cin >> decIP >> binIP;
        string converted_binIP = dectobin(decIP);
        if(converted_binIP == binIP)
           cout << "Case " << i << ": Yes" << endl;
        else
           cout << "Case " << i << ": No" << endl;
    }
}
