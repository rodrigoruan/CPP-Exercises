#include <bits/stdc++.h>
#include <string>

using namespace std;

int main() {
  string s;
  cin >> s;

  s = regex_replace(s, regex("WUB"), " ");
  s = regex_replace(s, regex("\\s+"), " ");
  s = regex_replace(s, regex("^\\s+|\\s+$"), "");

  cout << s << "\n";
}