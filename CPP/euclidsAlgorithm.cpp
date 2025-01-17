// Bismillahir Rahmanir Rahim
// Author : Khadiza Sultana
// Date   : 1/18/2025

#include <iostream>

using namespace std;

int gcdIterative(int a, int b)
{
    while (a > 0 && b > 0)
    {
        if (a > b)
            a = a % b;
        else
            b = b % a;
    }
    if (a == 0)
        return b;
    return a;
}

int gcdRecursive(int a, int b)
{
    if (b == 0)
        return a;
    return gcdRecursive(b, a % b);
}

int main()
{
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "GCD (Iterative) of " << a << " and " << b << " is: " << gcdIterative(a, b) << endl;

    cout << "GCD (Recursive) of " << a << " and " << b << " is: " << gcdRecursive(a, b) << endl;

    return 0;
}