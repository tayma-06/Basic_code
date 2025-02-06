#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int n;
    cin >> n;
    vector<int> x(n);
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
    }
    sort(x.begin(), x.end());
    int q, m;
    cin >> q;
    while (q--)
    {
        cin >> m;
        auto it = upper_bound(x.begin(), x.end(), m);
        cout << (it - x.begin()) << endl;
    }
    return 0;
}
