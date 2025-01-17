// Bismillahir Rahmanir Rahim
// Author : Khadiza Sultana
// Date   : 1/4/2025

#include <iostream>
#include <vector>

using namespace std;

int binarySearch(vector<int> &arr, int tar)
{ // practical implementation
    int n = arr.size();
    int st = 0, end = n - 1;
    while (st <= end)
    {
        int mid = st + (end - st) / 2; // not using (st+end)/2 to avoid integer overflow
        if (tar > arr[mid])
        {
            st = mid + 1;
        }
        else if (tar < arr[mid])
        {
            end = mid - 1;
        }
        else
        {
            return mid;
        }
    }
    return -1;
}

int binarySearch2(vector<int> &arr, int tar, int st, int end)
{ // recursive implementation
    if (st > end)
    { // base case
        return -1;
    }
    int mid = st + (end - st) / 2;
    if (tar > arr[mid])
    {
        binarySearch2(arr, tar, mid + 1, end);
    }
    else if (tar < arr[mid])
    {
        binarySearch2(arr, tar, st, mid - 1);
    }
    else
    {
        return mid;
    }
}

int main()
{
    vector<int> arr1 = {3, 5, 7, 12, 15, 18}; // even no of elements
    int tar1 = 3;
    vector<int> arr2 = {4, 6, 10, 11, 12, 18, 19}; // odd no of elements
    int tar2 = 19;

    cout << "Index at which tar1 is found(even no of elements) : " << binarySearch(arr1, tar1) << endl;
    cout << "Index at which tar2 is found(odd no of elements) : " << binarySearch(arr2, tar2) << endl;

    cout << "Using Recusive function index at which tar1 is found : " << binarySearch2(arr1, tar1, 0, 5) << endl;
    cout << "Using Recusive function index at which tar1 is found : " << binarySearch2(arr2, tar2, 0, 6) << endl;

    return 0;
}
