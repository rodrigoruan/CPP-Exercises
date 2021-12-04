#include <bits/stdc++.h>

using namespace std;

int main() {
  while(cin) {
    string a, res; cin >> a;
    if(cin.fail()) break;
    int n; cin >> n;

    for(int i = 0; i < n; i++) {
      int x; cin >> x;
      res += a[x-1];
    }

    cout << res << "\n";
  }
}