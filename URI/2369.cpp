#include <bits/stdc++.h>

using namespace std;

int main() {

  int n, res = 7; cin >> n;

  while(n > 7) {
    if(n > 100) res += 5;
    else if(n > 30) res += 2;
    else if(n > 10) res += 1;
    n--;
  }

  cout << res << "\n";
}