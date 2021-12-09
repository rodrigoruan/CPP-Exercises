#include <bits/stdc++.h>

using namespace std;

int main() {
  cin.ignore();
  string s; getline(cin, s);

  s = regex_replace(s, regex("\\{|\\}|,|\\s"), "");
 
  vector<char> arr = {};
  for(char c : s) {
    if(!count(arr.begin(), arr.end(), c)) arr.push_back(c);
  }

  cout << arr.size() << "\n";
}