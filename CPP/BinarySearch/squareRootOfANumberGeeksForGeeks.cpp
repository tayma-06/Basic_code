// Bismillahir Rahmanir Rahim
// Author : Khadiza Sultana
// Date   : 1/19/2025

#include <iostream>

using namespace std;

int floorSqrt(int n)
{
    int l = 1, r = n, ans = 1;
    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        if (mid * mid <= n)
        {
            ans = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    return ans;
}

int main()
{
    int n;
    cout << "Enter a number to find its floor square root: ";
    cin >> n;

    if (n < 0)
    {
        cout << "Square root is not defined for negative numbers." << endl;
    }
    else
    {
        int result = floorSqrt(n);
        cout << "The floor square root of " << n << " is " << result << endl;
    }

    return 0;
}
