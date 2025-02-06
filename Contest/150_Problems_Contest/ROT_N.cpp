// shift each character in a string by a given number places
#include<iostream>
using namespace std;
int main(){
    int N; // the number of places to shift
    string S;
    cin >> N >> S;
    for(int i = 0; S[i] != '\0'; i++){
    // until S[i] is not equal to null terminator
        int X = S[i] - 'A'; // converts position of the element in i
        // position to a position where A is in position 0, B is in 
        // position 1, C in 2 and so on
        X += N; // Adds the number of positions to be shifted
        X %= 26; // If exceeds 26 that is the total value of alphabets
        // then it wraps it up
        S[i] = 'A' + X; // puts the character to it's required
        // position
    }
    cout << S << endl;
    return 0;
}
