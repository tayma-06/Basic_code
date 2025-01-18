// Bismillahir Rahmanir Rahim
// Author : Khadiza Sultana
// Date   : 1/19/2025

#include <iostream>
#include <vector>

using namespace std;

int peakElement(vector<int> &arr)
{
    int n = arr.size();
    if (n == 1)
        return 0;
    if (arr[0] > arr[1])
        return 0;
    if (arr[n - 1] > arr[n - 2])
        return n - 1;
    int l = 1, r = n - 2;
    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        if (arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1])
        {
            return mid;
        }
        else if (arr[mid] > arr[mid - 1])
        {
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    return -1;
}

int main()
{
    vector<int> arr = {1, 3, 20, 4, 1, 0};
    int peakIndex = peakElement(arr);
    if (peakIndex != -1)
    {
        cout << "The peak element is " << arr[peakIndex] << " at index " << peakIndex << endl;
    }
    else
    {
        cout << "No peak element found." << endl;
    }

    return 0;
}
