#include <bits/stdc++.h>

using namespace std;

int main() {
  int n; cin >> n;

  int last; cin >> last;

  for(int i = 1; i <= n - 1; i ++) {
    int x; cin >> x;
    if(x < last) {
      cout << i + 1 << "\n";
      return 0;
    }
    last = x;
  }

  cout << 0 << "\n";
}