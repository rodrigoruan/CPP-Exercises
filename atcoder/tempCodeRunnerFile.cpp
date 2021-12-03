#include <bits/stdc++.h>

using namespace std;

int main() {
  int n; cin >> n;
  string res;

  if(n >= 42) n += 1;

  if(to_string(n).size() == 1) res = "00" + to_string(n);
  if(to_string(n).size() == 2) res = "0" + to_string(n);

  cout << "AGC" << res << "\n";
}