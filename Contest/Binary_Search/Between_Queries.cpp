#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    int q, l, r;
    cin >> q;
    while (q--)
    {
        cin >> l >> r;
        int count = 0;
        auto left = lower_bound(a.begin(), a.end(), l);
        auto right = upper_bound(a.begin(), a.end(), r);
        cout << (right - left) << endl;
    }
    return 0;
}
