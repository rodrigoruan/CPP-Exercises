#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;

  for(int i = 0 ; i < n; i++) {
    int a, r, w=-1, last;
    cin >> a >> r;

    for(int j = 1; j <= a; j++) {
      int x; cin >> x;
      if(abs(r - x) < last || w == -1) {
        last = abs(r - x);
        w = j;
      }
    }
  
    cout << w << "\n";
  }
}