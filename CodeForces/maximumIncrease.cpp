#include <bits/stdc++.h>

using namespace std;

int main() {
  int n; cin >> n;
  int last; cin >> last;
  int total = 1; int res = 1;
  n--;

  while(n--) {
    int x; cin >> x;
    if(x > last) {
      total++;
      if(total > res) res = total;
    } 
    else {
      if(total > res) res = total;
      total = 1;
    } 
    last = x;
  }
  cout << res << "\n";
}