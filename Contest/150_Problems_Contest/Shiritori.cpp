#include <iostream>
#include <vector>
#include <string>
#include <unordered_set>
/*I recently learned STL. So started implementing those*/
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<string> w(N);
    for (int i = 0; i < N; i++)
    {
        cin >> w[i];
    }
    unordered_set<string> usedW;
    usedW.insert(w[0]);
    for (int i = 1; i < N; i++)
    {
        if (usedW.find(w[i]) != usedW.end())
        {
            cout << "No" << endl;
            return 0;
        }
        if (w[i][0] != w[i - 1].back())
        {
            /*here w[i][0] indicates the first letter of the i th word
            and w[i-1].back() indicates the last letter of the (i-1) th word
            which should match for it to work*/
            cout << "No" << endl;
            return 0;
        }
        usedW.insert(w[i]);
    }
    cout << "Yes" << endl;
    return 0;
}
