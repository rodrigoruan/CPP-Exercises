#include <bits/stdc++.h>

using namespace std;

int main() {
  int n; cin >> n;

  vector<string> arr = {};

  for(int i = 0; i < n; i ++) {
    string s; cin >> s; arr.push_back(s);
  }

  int res = 0;

  map<char, int> obj = {
    {'C', 6},
    {'T', 4},
    {'D', 12},
    {'I', 20},
    {'O', 8}
  };

  for(string  c : arr) {
    res += obj[c[0]];
  }

  cout << res << "\n";
}