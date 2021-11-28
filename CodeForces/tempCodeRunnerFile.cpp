#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, res=0;
  cin >> n;

  int total = 1, last=0;

  for(int i = 0; i < n; i++) {
    int a;
    cin >> a;

    if(total > res) res = total;

    if(a >= last) {
      total++;
    } else {
      total = 0;
    }

    last = a;
  }

  cout << res << "\n";
}