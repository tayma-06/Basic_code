#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cin >> n;
    char s[51];
    for(int i = 0; i < n; i++){
        cin >> s[i];
    }
    char t[] = {'A', 'C', 'T', 'G'};
    int minimum = INT_MAX;
    for(int i = 0; i <= n - 4; i++){
        int current = 0;
        for(int j = 0; j < 4; j++){ // checks each substrings
            int diff = abs(s[i + j] - t[j]);
            current += min(diff, 26 - diff);
        }
        if(current < minimum) minimum = current;
    }
    cout << minimum << endl;
    return 0;
}
/* suppose n = 6;
   s = "AFBAKC";
   need to check AFBA, FBAK, BAKC substrings;
   AFBA to ACTG 0 + 3 + 8 + 6 = 17;
   FBAK to ACTG 5 + 1 + 7 + 4 = 17;
   BAKC to ACTG 1 + 2 + 9 + 4 = 16;
   min = 16;
   will print 16;
   
   */
