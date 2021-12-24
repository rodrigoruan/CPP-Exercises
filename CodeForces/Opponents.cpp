#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, d; cin >> n >> d;
  int total = 0, max = 0;

  while(d--) {
    string x; cin >> x;
    if(!regex_match(x, regex("^1+$"))) {
      total += 1;
      if(total > max) max = total;
    } else {
      total = 0;
    }
  }

  cout << max << "\n";
}