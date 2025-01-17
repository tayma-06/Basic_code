// Bismillahir Rahmanir Rahim
//  Author : Khadiza Sultana
//  Date   : 1/18/2025

#include <iostream>
#include <vector>

using namespace std;

bool searchInRow(vector<vector<int>> &mat, int tar, int row);
bool searchMatrix(vector<vector<int>> &mat, int tar);

int main()
{
    vector<vector<int>> matrix = {
        {1, 3, 5, 7},
        {10, 11, 16, 20},
        {23, 30, 34, 60}};
    int target = 3;

    if (searchMatrix(matrix, target))
    {
        cout << "Target " << target << " found in the matrix." << endl;
    }
    else
    {
        cout << "Target " << target << " not found in the matrix." << endl;
    }

    return 0;
}

bool searchInRow(vector<vector<int>> &mat, int tar, int row)
{
    int n = mat[0].size();
    int st = 0, end = n - 1;
    while (st <= end)
    {
        int mid = st + (end - st) / 2;
        if (tar == mat[row][mid])
        {
            return true;
        }
        else if (tar > mat[row][mid])
        {
            st = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return false;
}

bool searchMatrix(vector<vector<int>> &mat, int tar)
{
    int m = mat.size(), n = mat[0].size();
    int stRow = 0, endRow = m - 1;
    while (stRow <= endRow)
    {
        int midRow = stRow + (endRow - stRow) / 2;
        if (tar >= mat[midRow][0] && tar <= mat[midRow][n - 1])
        {
            return searchInRow(mat, tar, midRow);
        }
        else if (tar >= mat[midRow][n - 1])
        {
            stRow = midRow + 1;
        }
        else
        {
            endRow = midRow - 1;
        }
    }
    return false;
}
