// Bismillahir Rahmanir Rahim
// Author: Khadiza Sultana
// Date: 1/5/2025

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool isValid(vector<int> &arr, int n, int m, int allowed);
int minimumDistance(vector<int> &arr, int n, int m);

int main()
{

    int N = 5, C = 3;
    vector<int> arr = {1, 2, 8, 4, 9};
    sort(arr.begin(), arr.end());

    cout << minimumDistance(arr, N, C) << endl;

    return 0;
}

bool isValid(vector<int> &arr, int n, int m, int allowed)
{
    int cow = 1, lastStallPos = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] - lastStallPos >= allowed)
        {
            cow++;
            lastStallPos = arr[i];
            if (cow == m)
            {
                return true;
            }
        }
    }
    return false;
}

int minimumDistance(vector<int> &arr, int n, int m)
{
    int st = 1, end = arr[n - 1] - arr[0], ans = 0;
    while (st <= end)
    {
        int mid = st + (end - st) / 2;
        if (isValid(arr, n, m, mid))
        {
            ans = mid;
            st = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return ans;
}
