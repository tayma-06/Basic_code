// Bismillahir Rahmanir Rahim
// Author: Khadiza Sultana
// Date  : 1/18/2025

#include <iostream>

using namespace std;

int primecheck(int n)
{
    bool isprime = true;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            isprime = false;
            return false;
        }
    }
    if (isprime)
        return true;
}

void printprime(int num)
{
    for (int i = 2; i <= num; i++)
    {
        if (primecheck(i))
            cout << i << " ";
    }
}

int primecount(int num)
{
    int count = 0;
    for (int i = 2; i <= num; i++)
    {
        if (primecheck(i))
            count++;
    }
    return count;
}

int main()
{
    int num;
    cin >> num;
    printprime(num);
    cout << endl;
    cout << primecount(num) << endl;
    return 0;
}
