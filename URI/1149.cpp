#include <bits/stdc++.h>

using namespace std;

int main() {
  int a; cin >> a;
  int n; cin >> n;

  while(n <= 0) cin >> n;

  int res = 0;

  for(int i = 0; i < n; i += 1) res += a + i;

  cout << res << "\n";
}