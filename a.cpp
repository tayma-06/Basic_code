#include<iostream>
#include<vector>

using namespace std;

bool isValid(vector<int>&arr, int n, int m, int maxAllowed) {
    int stu = 1, pages = 0;
    for (int i = 0; i <n; i++) {
        if (arr[i] > maxAllowed) return false;
        if (pages+arr[i] <= maxAllowed) {
            pages += arr[i];
        } else {
            stu++;
            pages = arr[i];
        }
    }
    if (stu > m) return false;
    else return true;
}

int allocateBooks(vector<int> &arr, int n, int m) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    int st=0, end=sum, ans = 0; // range of possible answer
    while (st <= end) {
        int mid = st + (end-st)/2;
        if (isValid(arr, n, m, mid)) { // valid ans so search left
            ans = mid;
            end = mid - 1;
        }
        else { // invalid so search right
            st = mid + 1;
        }
    }
    return ans;
}

int main() {
    vector<int>arr = {20, 10, 35, 62};
    int n = 4, m = 2;
    cout << allocateBooks(arr, n, m) << endl;
    return 0;
}
