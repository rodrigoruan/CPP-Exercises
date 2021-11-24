#include <bits/stdc++.h>

using namespace std;

int main() {
  string a, b;
  cin >> a >> b;

  reverse(b.begin(), b.end());

  bool res = a == b;

  if(res) cout << "YES" << "\n";
  else cout << "NO" << "\n";
}