#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    sort(a.begin(), a.end());
    for (int j = 0; j < m; j++)
    {
        auto it = upper_bound(a.begin(), a.end(), b[j]);
        int count = it - a.begin();
        cout << count << " ";
    }
    cout << endl;
}
