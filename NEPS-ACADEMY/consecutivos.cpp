#include <bits/stdc++.h>

using namespace std;

int main() {
  int n; cin >> n;

  int x; cin >> x;

  int res = 1, last = x, total = 0;

  for(int i = 0; i < n - 1; i++) {
    int j; cin >> j;
    if(j == last) {
      res += 1;
      last = j;
    } 
    if(j != last || i + 1 == n - 1) {
      if(res > total) total = res;
      res = 1;
      last = j;
    }
  }

  cout << total << "\n";
}