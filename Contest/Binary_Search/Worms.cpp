#include<bits/stdc++.h>
using namespace std;

#define int long long
#define vll vector<int>
#define vpll vector<pair<int, int>>

signed main(){
    int n;
    cin>>n;
    vll a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int m;
    cin>>m;
    vll q(m);
    for(int i=0; i<m; i++){
        cin>>q[i];
    }
    vll preSum(n);
    preSum[0]=a[0];
    for(int i=1; i<n; i++){
        preSum[i]=preSum[i-1]+a[i];
    }
    int ans=0;
    for(int i=0; i<m; i++){
        int query=q[i];
        int n=preSum.size();
        int st=0, end=n-1;
        while(st<end){
            int mid=st+(end-st)/2;
            if(query <= preSum[mid]) end=mid;
            else st=mid+1;
        }
        cout << st + 1 << endl;
    }
    return 0;
}
