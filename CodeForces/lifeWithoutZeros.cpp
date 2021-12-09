#include <bits/stdc++.h>

using namespace std;

int main() {
  string a, b; cin >> a >> b;
  string x = regex_replace(to_string(stoi(a) + stoi(b)), regex("0"), "");
  a = regex_replace(a, regex("0"), "");
  b = regex_replace(b, regex("0"), "");

  string res = to_string(stoi(a) + stoi(b)) == x ? "YES" : "NO";

  cout << res << "\n";
}