#include <bits/stdc++.h>

using namespace std;

int main() {
  int a, b, c; cin >> a >> b >> c;

  int vazias = a + b;
  int res = 0;

  while(vazias > 0) {
    vazias = vazias / c;
    res += vazias;
  }

  cout << res << "\n";
}