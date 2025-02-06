#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n, k;
    cin >> n >> k;
    /* n is the length of array while k is the number of operations
    to be performed */
    int a[n]; 
    for(int i = 0; i < n; i++){ /* reads the elements in the array a */
        cin >> a[i];
    }
    int previous = 0, count = 0; /* the previous integer keeps tracks of the
    last used or processed variable
    the count tracks how many differences were made */
    sort(a, a + n);
    for(int i = 0; i < n && count < k; i++){
        if(a[i] > previous){
           cout << a[i] - previous << endl;
           previous = a[i];                 
           count++;
        }
        /* let n = 3, k = 5, a[3] = {1,2,3}
           iteration 1: 1-0 = 1
           iteration 2: 2-1 = 1
           iteration 3: 3-2 = 1
           now count = 3 which is less than k 
           now it enter the next while loop and print 
           0 
           0 */
    }
    while(count < k){ /* If the counted operations done is less than k then the
    result will be 0 that is why we will get 0 as output */
          cout << 0 << endl;
          count++;
    }
    return 0;
}
