// Bismillahir Rahmanir Rahim
// Author : Khadiza Sultana
// Date   : 1/18/2025

#include <iostream>
#include<vector>

using namespace std;

int countPrimes(int n)
{
    int count = 0;
    vector<bool> isPrime(n + 1, true);
    for (int i = 2; i < n; i++)
    {
        if (isPrime[i])
            count++;
        for (int j = i * 2; j < n; j = j + i)
            isPrime[j] = false;
    }

    return count;
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (n <= 2)
    {
        cout << "No primes less than " << n << endl;
    }
    else
    {
        int result = countPrimes(n);
        cout << "Number of prime numbers less than " << n << " is: " << result << endl;
    }

    return 0;
}