#include <bits/stdc++.h>

using namespace std;

int main() {
  string s;
  cin >> s;

  string res = regex_search(s, regex("H|Q|9")) ? "YES" : "NO";

  cout << res << "\n";
}