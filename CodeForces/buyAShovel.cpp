#include <bits/stdc++.h>

using namespace std;

int main() {
  int a, b; cin >> a >> b;

  int res = a;

  for(int i = 1;;i++) {
    if(res * i % 10 == 0 || (res * i % 10 == b)) {
      cout << i << "\n";
      break;
    }
  }
}