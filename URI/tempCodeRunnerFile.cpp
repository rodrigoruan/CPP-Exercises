#include <bits/stdc++.h>

using namespace std;

int main() {
  string s;
  getline(cin, s);

  s = regex_replace(s, regex("(\\w+)\\1+"), "$1");

  cout << s << "\n";
}