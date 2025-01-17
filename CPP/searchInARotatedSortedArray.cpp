// Bismillarih Rahmanir Rahim
// Author : Khadiza Sultana
// Date   : 1/4/2025

#include <iostream>
#include <vector>

using namespace std;

int search(vector<int> &nums, int target)
{
    int st = 0, end = nums.size() - 1;
    while (st <= end)
    {
        int mid = st + (end - st) / 2;
        if (nums[mid] == target)
        {
            return mid;
        }
        if (nums[st] <= nums[mid])
        { // Left half is sorted
            if (nums[st] <= target && target <= nums[mid])
            {
                end = mid - 1;
            }
            else
            {
                st = mid + 1;
            }
        }
        else
        { // Right half is sorted
            if (nums[mid] <= target && target <= nums[end])
            {
                st = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
    }
    return -1;
}

int main()
{
    vector<int> nums = {4, 5, 6, 7, 0, 1, 2};
    int target = 0;

    int result = search(nums, target);

    if (result != -1)
    {
        cout << "Target " << target << " found at index: " << result << endl;
    }
    else
    {
        cout << "Target " << target << " not found in the array." << endl;
    }

    return 0;
}
