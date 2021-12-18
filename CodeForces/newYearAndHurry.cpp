#include <bits/stdc++.h>

using namespace std;

int main() {
  int a, b; cin >> a >> b;
  int res = 240 - b;

  int n = 0;

  while(res - ((n+1) * 5) >= 0 && n < a) {
    res -= (n+1) * 5;
    n += 1;
  }

  cout << n << "\n";
}