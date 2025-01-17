// Bismillahir Rahmanir Rahim
// Author: Khadiza Sultana
// Date  : 1/17/2025

#include <iostream>
#include <string>
#include <vector>
#include<algorithm>

using namespace std;

string reverseWords1(string s);
string reverseWords2(string s);

int main()
{
    string input1;
    getline(cin, input1);
    string reversed1 = reverseWords1(input1);
    cout << reversed1 << endl;

    string input2;
    getline(cin, input2);
    string reversed2 = reverseWords2(input2);
    cout << reversed2 << endl;

    return 0;
}

string reverseWords1(string s)
{
    int n = s.length();
    string ans = "";
    reverse(s.begin(), s.end());
    for (int i = 0; i < n; i++)
    {
        string word = "";
        while (i < n && s[i] != ' ')
        {
            word += s[i];
            i++;
        }
        reverse(word.begin(), word.end());
        if (word.length() > 0)
        {
            ans += " " + word;
        }
    }
    return ans.substr(1);
}

string reverseWords2(string s)
{
    vector<string> vec;
    string word = "";
    for (char c : s)
    {
        if (c == ' ')
        {
            if (!word.empty())
            {
                vec.push_back(word);
                word = "";
            }
        }
        else
        {
            word += c;
        }
    }
    if (!word.empty())
    {
        vec.push_back(word);
    }
    string result = "";
    for (int i = vec.size() - 1; i >= 0; i--)
    {
        if (!result.empty())
        {
            result += " ";
        }
        result += vec[i];
    }

    return result;
}
