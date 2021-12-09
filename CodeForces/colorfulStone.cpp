#include <bits/stdc++.h>

using namespace std;

int main() {
  string s, t; cin >> s >> t;

  int res = 1;

  for(char c : t) {
    if(s[0] == c) {
      res ++;
      s = s.substr(1, s.size());
    }
  }

  cout << res << "\n";
}