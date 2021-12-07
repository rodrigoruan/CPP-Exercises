#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, h, res=0; cin >> n >> h;

  for(int i = 0; i < n; i++) {
    int x; cin >> x;
    if(x > h) res += 2;
    else res += 1;
  }

  cout << res << "\n";
}