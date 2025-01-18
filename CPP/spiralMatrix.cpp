// Bismillahir Rahmanir Rahim
// Author : Khadiza Sultana
// Date   : 1/18/2025

#include <iostream>
#include <vector>

using namespace std;

vector<int> spiralOrder(vector<vector<int>> &mat)
{
    int m = mat.size(), n = mat[0].size();
    int srow = 0, erow = m - 1, scol = 0, ecol = n - 1;
    vector<int> ans;
    while (srow <= erow && scol <= ecol)
    {
        // top
        for (int j = scol; j <= ecol; j++)
        {
            ans.push_back(mat[srow][j]);
        }
        // right
        for (int i = srow + 1; i <= erow; i++)
        {
            ans.push_back(mat[i][ecol]);
        }
        // bottom
        for (int j = ecol - 1; j >= scol; j--)
        {
            if (srow == erow)
                break;
            ans.push_back(mat[erow][j]);
        }
        // left
        for (int i = erow - 1; i > srow; i--)
        {
            if (scol == ecol)
                break;
            ans.push_back(mat[i][scol]);
        }
        srow++;
        scol++;
        erow--;
        ecol--;
    }
    return ans;
}

int main()
{
    vector<vector<int>> mat = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}};
    int m = mat.size(), n = mat[0].size();

    vector<int> result = spiralOrder(mat);

    cout << "Spiral order: " << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    return 0;
}
