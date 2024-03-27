// https://www.codewars.com/kata/54ff3102c1bad923760001f3/train/cpp
#include <bits/stdc++.h>

using namespace std;

int getCount(const string &inputStr)
{
    int num_vowels = 0;
    map<char, int> mp = {{'a', 1}, {'e', 1}, {'i', 1}, {'o', 1}, {'u', 1}};

    for (int i = 0; i < inputStr.size(); i++)
    {
        if (mp[inputStr[i]])
        {
            num_vowels++;
        }
    }

    return num_vowels;
}