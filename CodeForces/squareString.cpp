#include <bits/stdc++.h>

using namespace std;

int main() {
  int n; cin >> n;
  while(n) {
    n--;
    string s; cin >> s;
    if((regex_search(s, regex("^(.)\\1+$")) || regex_search(s, regex("^(.+)\\1+$"))) && s.size() % 2 == 0) {
      cout << "YES" << "\n";
    } else {
      cout << "NO" << "\n";
    }
  }
}