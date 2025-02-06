#include <bits/stdc++.h>
using namespace std;
#define int long long

bool isValid(vector<int>&arr, int t, int mid){
    int total=0;
    for(int i=0; i<arr.size(); i++){
        total += mid/arr[i];
        if(total >= t) return true;
    }
    return false;
}

int minTime(vector<int>&arr, int t){
    int l = 1, r = *min_element(arr.begin(), arr.end()) * t, ans = r;
    while(l<=r){
        int mid=l+(r-l)/2;
        if(isValid(arr, t, mid)){
            ans=mid;
            r=mid-1;
        }
        else{
            l=mid+1;
        }
    }
    return ans;
}

signed main()
{
    int n, t;
    cin >> n >> t;
    vector<int>a(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    cout << minTime(a, t) << endl;
    return 0;
}
