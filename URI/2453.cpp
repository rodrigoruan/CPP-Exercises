#include <bits/stdc++.h>

using namespace std;

int main() {
  string s;
  cin.ignore();
  getline(cin, s);

  s = regex_replace(s, regex("(p)(\\w)"), "$2");

  cout << s << "\n";
}