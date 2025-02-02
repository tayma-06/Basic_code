#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    string name[n]; /* taking a string array for the first time */
    /* wanted to work with it */
    for(int i = 0; i < n; i++){
        cin >> name[i];
    }
    int count[26] = {0}; /* This array will count the number of students 
    starting with same letter. 
    There are 26 letters in alphabet so we set the array size to 26 */
    for(int i = 0; i < n; i++){
        count[name[i][0] - 'a']++;
        /* Here name[i][0] is accessing the ith name and 
        the first initial of the ith name 
        by subtracting we are getting 0 for alphabet a, 1 dor b and so on*/
    }
    /* The next part of the code is to determine the pair of students 
    i.e. pair calculation is done */
    int minimum_pairs = 0;
    /* Here number of pairs=k(k-1)/2; 1c2 permutation and combination */
    for(int i = 0; i < 26; i++){
        int k = count[i];
        if(k > 1){
            /* splitting the students into half 
            that's why a = k/2 and the remaining students in b */
            int a = k / 2;
            int b = k - a;
            /* Implementing the formula */
            int pairs_a = a * (a - 1) / 2;
            int pairs_b = b * (b - 1) / 2;
            minimum_pairs += pairs_a + pairs_b; /* Total pairs in both the groups */ 
        }
    }
    cout << minimum_pairs << endl;
    return 0;
}
