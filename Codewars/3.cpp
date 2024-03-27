// https://www.codewars.com/kata/52fba66badcd10859f00097e/train/cpp
#include <bits/stdc++.h>

using namespace std;

string disemvowel(const string &str)
{
    map<char, int> mp = {{'a', 1}, {'e', 1}, {'i', 1}, {'o', 1}, {'u', 1}};

    string newStr = "";
    for (int i = 0; i < str.size(); i++)
    {
        if (!mp[tolower(str[i])])
        {
            newStr += str[i];
        }
    }

    return newStr;
}