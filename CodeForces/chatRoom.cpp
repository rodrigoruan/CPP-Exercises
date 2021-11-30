#include <bits/stdc++.h>

using namespace std;

int main() {
  string s;
  cin >> s;

  regex pattern("h(\\w+)?e(\\w+)?l(\\w+)?l(\\w+)?o");

  string res = regex_search(s.begin(), s.end(), pattern) ? "YES" : "NO";

  cout << res << "\n";
}