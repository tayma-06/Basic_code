// Bismillahir Rahmanir Rahim
// Author : Khadiza Sultana
// Date   : 1/18/2025

#include <iostream>
#include <climits> // For INT_MAX and INT_MIN

using namespace std;

int reverse(int n)
{
    int revNum = 0;
    while (n != 0)
    {
        int dig = n % 10;
        if (revNum > INT_MAX / 10 || revNum < INT_MIN / 10)
            return 0;
        revNum = revNum * 10 + dig;
        n /= 10;
    }
    return revNum;
}

bool isPalindrome(int n)
{
    if (n < 0)
        return false;
    int revNum = reverse(n);
    return n == revNum;
}

int main()
{
    int n;

    cout << "Enter an integer: ";
    cin >> n;

    if (isPalindrome(n))
        cout << n << " is a palindrome." << endl;
    else
        cout << n << " is not a palindrome." << endl;

    return 0;
}
