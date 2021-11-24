#include <bits/stdc++.h>

using namespace std;

int main() {
  int a, b, c, res=0;
  cin >> a >> b >> c;

  while(a >= 2 && b >= 3 && c >= 5) {
    res++, a -= 2, b -= 3, c -= 5;
  }

  cout << res << "\n";
}