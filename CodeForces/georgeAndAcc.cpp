#include <bits/stdc++.h>

using namespace std;

int main() {
  int a, res = 0;
  cin >> a;

  for(int i = 0; i < a; i ++) {
    int p, q;
    cin >> p >> q;
    if(q - p >= 2) res++;
  }

  cout << res << "\n";
}