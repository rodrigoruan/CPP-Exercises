#include <bits/stdc++.h>

using namespace std;

int main() {
  int n; cin >> n;
  string s; cin >> s;

  string res = "";

  for(int i = 0, j = 1; i < s.size(); i += j + 1, j += 1) {
    res += s.substr(i, j)[0];
  }

  cout << res << "\n";
}