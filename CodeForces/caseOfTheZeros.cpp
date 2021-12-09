#include <bits/stdc++.h>

using namespace std;

int main() {
  int n; cin >> n; string s; cin >> s;

  int o = 0, z = 0;

  for(char c : s) {
    if(c == '1') z++;
    else o++;
  }

  cout << abs(o - z) << "\n";
}