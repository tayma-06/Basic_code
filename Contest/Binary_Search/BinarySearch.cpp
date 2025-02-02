#include<bits/stdc++.h>
using namespace std;

#define int long long
#define vll vector<int>
#define vpll vector<pair<int, int>>

int binarySearch(vll &arr, int tar){
    int st=0, end=arr.size()-1;
    while(st<=end){
        int mid=st+(end-st)/2;
        if(arr[mid]==tar) return mid+1;
        else if(arr[mid] > tar) end=mid-1;
        else st=mid+1;
    }
    return -1;
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
        cout << binarySearch(a, x) << endl;
    }
}
