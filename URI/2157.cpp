#include <bits/stdc++.h>

using namespace std;

int main() {
  int a;
  cin >> a;

  for(int i = 0; i < a; i ++) {
    int x, y;
    cin >> x >> y;
    string r1;

    for(int i = x; i <= y; i++) {
      r1 += to_string(i);
    }

  string r2 = r1;
  reverse(r2.begin(), r2.end());

  cout << r1 << r2 << "\n";
  }
}