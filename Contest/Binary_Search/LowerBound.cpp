#include<bits/stdc++.h>
using namespace std;

#define int long long
#define vll vector<int>
#define vpll vector<pair<int, int>>

int lowerBound(vll &arr, int tar){
    int n=arr.size();
    int st=0, end=n-1;
    while(st<end){
        int mid=st+(end-st)/2;
        if(tar > arr[mid]) st=mid+1;
        else end=mid;
    }
    if(tar<=arr[st]) return st+1;
    else return -1;
}

signed main(){
    int n, q;
    cin >> n >> q;
    vll a(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
    while(q--){
        int x;
        cin >> x;
        cout << lowerBound(a, x) << endl;
    }
}
