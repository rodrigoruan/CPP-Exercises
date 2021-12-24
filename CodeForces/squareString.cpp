#include <bits/stdc++.h>

using namespace std;

int main() {
  int n; cin >> n;
  while(n) {
    n--;
    string s; cin >> s;

    if(s.size() % 2 != 0) {
      cout << "NO" << "\n";
    } else {
      string first = s.substr(0, s.size()/2);
      string second = s.substr(s.size()/2,s.size());

      string res = first == second ? "YES" : "NO";

      cout << res << "\n";
    }
  }
}