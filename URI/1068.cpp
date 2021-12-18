#include <bits/stdc++.h>

using namespace std;

int main() {
  string s;
  while(cin >> s) {
    s = regex_replace(s, regex("[^\\(\\)]"), "");
    while(regex_search(s, regex("\\(\\)"))) {
      s = regex_replace(s, regex("\\(\\)"), "");
    }
    string ans = s.size() == 0 ? "correct" : "incorrect";
    cout << ans << "\n";
  }
}