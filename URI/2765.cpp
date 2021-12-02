#include <bits/stdc++.h>

using namespace std;

int main() {
  string s;
  getline(cin, s);

  string s1 = regex_replace(s, regex("(.+)(?=\\,).+"), "$1");
  string s2 = regex_replace(s, regex(".+,(.+)$"), "$1");

  cout << s1 << "\n" << s2 << "\n";
}