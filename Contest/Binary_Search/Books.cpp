#include <bits/stdc++.h>
using namespace std;

#define int long long
#define double long double
#define vll vector<int>
#define vpll vector<pair<int, int>>
#define vld vector<double>

signed main() {
   int n, t;
    cin>>n>>t;
    vll a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int l=0, r=0, currSum=0, maxBooks=0;
    while (r<n){
        currSum+=a[r];
        while(currSum>t){
            currSum-=a[l];
            l++;
        }
        maxBooks=max(maxBooks,r-l+1);
        r++;
    }
    cout<<maxBooks<<endl;
    return 0;
}
