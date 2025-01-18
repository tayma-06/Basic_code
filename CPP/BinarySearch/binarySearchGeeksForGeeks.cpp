// Bismillahir Rahmanir Rahim
// Author : Khadiza Sultana
// Date   : 1/18/2025

#include <iostream>
#include <vector>

using namespace std;

int binarysearch(vector<int> &arr, int k)
{
    int n = arr.size();
    int l = 0, r = n - 1;
    int result = -1;
    while (l <= r)
    {
        int m = l + (r - l) / 2;
        if (arr[m] == k)
        {
            result = m;
            r = m - 1;
        }
        else if (arr[m] > k)
        {
            r = m - 1;
        }
        else
        {
            l = m + 1;
        }
    }
    return result;
}

int main()
{
    vector<int> arr = {1, 2, 4, 4, 4, 7, 9}; 
    int key;
    cout << "Enter the number to search: ";
    cin >> key;

    int index = binarysearch(arr, key);
    if (index != -1)
    {
        cout << "The first occurrence of " << key << " is at index " << index << endl;
    }
    else
    {
        cout << key << " is not present in the array." << endl;
    }

    return 0;
}
