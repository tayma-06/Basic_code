#include <iostream>
#include <vector>
#include <numeric> // for GCD
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> nums(n + 1);
    vector<int> prefix(n + 1, 0);
    vector<int> suffix(n + 2, 0);
    for (int i = 1; i <= n; i++)
    {
        cin >> nums[i];
    }
    for (int i = 1; i <= n; i++)
    {
        prefix[i] = gcd(prefix[i - 1], nums[i]);
    }
    for (int i = n; i >= 1; i--)
    {
        suffix[i] = gcd(suffix[i + 1], nums[i]);
    }
    int maxGCD = 0;
    for (int i = 1; i <= n; i++)
    {
        maxGCD = max(maxGCD, gcd(prefix[i - 1], suffix[i + 1]));
    }
    cout << maxGCD << endl;
    return 0;
}
