#include <bits/stdc++.h>

using namespace std;

int main() {
  vector<string> arr = {};

  while(cin) {
    string s; cin >> s;
    if(cin.fail()) break;
    if(!count(arr.begin(), arr.end(), s)) arr.push_back(s);
  }

  cout << arr.size() << "\n";
}