// Bismillahir Rahmanir Rahim
// Author: Khadiza Sultana
// Date: 1/4/2025

#include<iostream>
#include<vector>

using namespace std;

bool isValid(vector<int>&arr, int n, int m, int allowed);
int minimumTime(vector<int>&arr, int n, int m);

int main() {
    vector<int>arr = {40, 30, 10, 20};
    int n = 4, m = 2;
    cout << minimumTime(arr, n, m) << endl;
    return 0;
}

bool isValid(vector<int>&arr, int n, int m, int allowed) {
    int painter = 1, time = 0;
    for (int i=0; i<n; i++) {
        if (arr[i] > allowed) return false;
        if (time+arr[i] <= allowed) {
            time += arr[i];
        }
        else {
            painter++;
            time = arr[i];
        }
    }
    if (painter > m) return false;
    else return true;
}

int minimumTime(vector<int>&arr, int n, int m) {
    int sum = 0;
    for (int i=0; i<n; i++) {
        sum += arr[i];
    }
    int st = 0, end = sum, ans = 0;
    while (st <= end) {
        int mid = st + (end-st)/2;
        if (isValid(arr, n, m, mid)) {
            ans = mid;
            end = mid - 1;
        }
        else {
            st = mid + 1;
        }
    }
    return ans;
}
