#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void updateName(string &name)
{
   string updatedName;
   for (char ch : name)
    {
        if (ch != ' ')  
        {
            updatedName.push_back(tolower(ch));  
        }
    }
    name = updatedName;  
}

int main()
{
    int T;
    cin >> T ;
    cin.ignore(); // This whill not take the new line
    // character as input TT
    for (int i = 1; i <= T; i++)
    {
        string n1, n2;
        getline(cin, n1);
        getline(cin, n2);
        updateName(n1);
        updateName(n2);
        sort(n1.begin(), n1.end());
        sort(n2.begin(), n2.end());
        if (n1 == n2)
            cout << "Case " << i << ": Yes" << endl;
        else
            cout << "Case " << i << ": No" << endl;
    }
}
