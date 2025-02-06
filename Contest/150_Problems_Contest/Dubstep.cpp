#include<iostream>
#include<cstring>
using namespace std;
int main(){
    string a;
    bool firstword = true; // handeling spaces 
    cin >> a; // this reads the full line 
    for(int i = 0; i < a.size(); i++){
        if(a[i] == 'W' && a[i+1] == 'U' && a[i+2] == 'B'){
            i += 2; // skipping the WUB part of the string 
            if(!firstword){
                cout << " "; // printing spaces
                firstword = true; // resetting for the next part
            }
        }
        else{
            cout << a[i];
            firstword = false;
        }
    }
    cout << endl;
    return 0;
}
