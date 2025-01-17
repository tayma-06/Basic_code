// Bismillahir Rahmanir Rahim
//  Author : Khadiza Sultana
//  Date   : 1/18/2025

#include <iostream>
#include <climits>

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

int main()
{
    int n;
    cout << "Enter an integer: ";
    cin >> n;

    int reversedNumber = reverse(n);
    if (reversedNumber == 0 && n != 0)
    {
        cout << "Overflow occurred while reversing the number." << endl;
    }
    else
    {
        cout << "Reversed number is: " << reversedNumber << endl;
    }

    return 0;
}