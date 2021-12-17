#include <bits/stdc++.h>

using namespace std;

int main() {
  int p, n; cin >> p >> n;

  int last;
  cin >> last;

  for(int i = 0; i < n - 1; i ++) {
    int x; cin >> x;
    if(abs(x - last) > p) {
      cout << "GAME OVER" << "\n";
      return 0;
    }
    last = x;
  }

  cout << "YOU WIN" << "\n";
}