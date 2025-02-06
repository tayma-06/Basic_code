#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int n, k;
    cin>>n>>k;
    int l=1, r=n, ans=n;
    while(l<=r){
        int mid=l+(r-l)/2, total=0, curr=mid;
        while(curr>0){
            total+=curr;
            if(total>=n){
                break;
            }
            curr /= k;
        }
        if(total>=n){
            ans=mid;
            r=mid-1;
        }
        else{
            l=mid+1;
        }
    }
    cout << ans << endl;
    return 0;

}
