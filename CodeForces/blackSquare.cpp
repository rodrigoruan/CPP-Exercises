#include <bits/stdc++.h>

using namespace std;

int main() {
  int a, b, c, d;
  cin >> a, cin >> b, cin >> c, cin >> d;
  vector<int> numbers = {a, b, c, d};

  string s; cin >> s;

  int res = 0;

  for(char c : s) {
    res += numbers[(int)c - 49];
  }

  cout << res << "\n";
}