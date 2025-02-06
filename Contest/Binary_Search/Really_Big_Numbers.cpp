#include <bits/stdc++.h>
using namespace std;
#define int long long

int sum(int x)
{
    int sum = 0;
    while (x > 0)
    {
        sum += x % 10;
        x /= 10;
    }
    return sum;
}

signed main()
{
    int n, s;
    cin >> n >> s;
    int l = 1, r = n, ans = n + 1;
    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        if (mid - sum(mid) >= s)
        {
            ans = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    if (ans > n)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << n - ans + 1 << endl;
    }
    return 0;
}
