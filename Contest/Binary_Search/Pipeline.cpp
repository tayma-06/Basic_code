#include <bits/stdc++.h>
using namespace std;

#define int long long
#define double long double
#define vll vector<int>
#define vpll vector<pair<int, int>>
#define vld vector<double>

signed main()
{
    int n, k;
    cin >> n >> k;
    if (n == 1)
    {
        cout << 0 << endl;
        return 0;
    }
    if (n <= k)
    {
        cout << 1 << endl;
        return 0;
    }
    --k;
    --n;
    int total_sum = (k * (k + 1)) / 2;
    if (total_sum < n)
    {
        cout << -1 << endl;
        return 0;
    }
    int st = 1, en = k;
    while (st < en)
    {
        int md = (st + en) / 2;
        int s = (k * (k + 1)) / 2 - (md * (md - 1)) / 2;

        if (s == n)
        {
            cout << k - md + 1 << endl;
            return 0;
        }
        if (s > n)
            st = md + 1;
        else
            en = md;
    }
    cout << k - st + 2 << endl;
    return 0;
}
