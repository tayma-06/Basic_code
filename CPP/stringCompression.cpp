// Bismillahir Rahmanir Rahim
// Author: Khadiza Sultana
// Date  : 1/5/2025

#include<iostream>
#include<vector>
#include<string>

using namespace std;

int compress(vector<char>& chars);
vector<char> printArray(vector<char>&chars);

int main() {

    vector<char> chars = {'a', 'a', 'b', 'b', 'c', 'c', 'c'};
    
    cout << "Oriinal Length   : " << chars.size() << endl;
    cout << "Original vector  : ";
    printArray(chars);
    cout << endl;

    cout << "New Length       : " << compress(chars) << endl;
    cout << "Compressed vector: ";
    printArray(chars);
    cout << endl;

    return 0;
}

vector<char> printArray(vector<char>&chars){
    for (char ch : chars) {
        cout << ch << " ";
    }
}

int compress(vector<char>& chars) {
        int idx=0,i=0,n=chars.size();
        while(i<n){
            char ch=chars[i];
            int count=0;
            while(i<n && chars[i]==ch){
                count++;
                i++;
            }
            if(count==1) chars[idx++]=ch;
            else{
                chars[idx++]=ch;
                string str=to_string(count);
                for(char digit : str)
                    chars[idx++]=digit;
            }
        }
        chars.resize(idx);
        return idx;
    }