// Bismillahir Rahmanir Rahim
// Author: Khadiza Sultana
// Date  : 1/17/2025

#include <iostream>
#include <string>

using namespace std;

bool checkInclusion(string s1, string s2);
bool isFrequencySame(int freq1[], int freq2[]);

int main()
{
    string s1 = "ab";
    string s2 = "eidbaooo";

    if (checkInclusion(s1, s2))
        cout << "True" << endl;
    else
        cout << "False" << endl;

    string s3 = "ab";
    string s4 = "eidboaoo";

    if (checkInclusion(s3, s4))
        cout << "True" << endl;
    else
        cout << "False" << endl;

    return 0;
}

bool isFrequencySame(int freq1[], int freq2[])
{
    for (int i = 0; i < 26; i++)
    {
        if (freq1[i] != freq2[i])
            return false;
    }
    return true;
}

bool checkInclusion(string s1, string s2)
{
    int freq[26] = {0};
    for (int i = 0; i < s1.length(); i++)
    {
        freq[s1[i] - 'a']++;
    }
    int windowSize = s1.length();
    for (int i = 0; i < s2.length(); i++)
    {
        int windowIdx = 0, idx = i;
        int windowFreq[26] = {0};
        while (windowIdx < windowSize && idx < s2.length())
        {
            windowFreq[s2[idx] - 'a']++;
            idx++;
            windowIdx++;
        }
        if (isFrequencySame(freq, windowFreq))
            return true;
    }
    return false;
}
