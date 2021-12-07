#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, x, res = 1, last; cin >> n;
  cin >> x; last = x;
  for(int i = 0; i < n - 1; i ++) {
    cin >> x;
    if(x != last) res++;
    last = x;
  }

  cout << res << "\n";
}