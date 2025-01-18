// Bismillahir Rahmanir Rahim
// Author : Khadiza Sultana
// Date   : 1/18/2025

#include <iostream>
#include <vector>

using namespace std;

int findFloor(vector<int> &arr, int k)
{
    int n = arr.size();
    int l = 0, r = n - 1, result = -1;
    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        if (arr[mid] == k)
        {
            return mid;
        }
        else if (arr[mid] < k)
        {
            result = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    return result;
}

int main()
{
    vector<int> arr = {1, 2, 4, 6, 8, 10};
    int key;
    cout << "Enter the number to find its floor: ";
    cin >> key;

    int index = findFloor(arr, key);
    if (index != -1)
    {
        cout << "The floor of " << key << " is " << arr[index] << " at index " << index << endl;
    }
    else
    {
        cout << "No floor found for " << key << " in the array." << endl;
    }

    return 0;
}
