#include <bits/stdc++.h>

using namespace std;

int main() {
  int n; cin >> n;

  int polic = 0, total = 0;

  for(int i = 0; i < n; i += 1) {
    int x; cin >> x;
    if(x > 0) polic += x;
    if(x == -1 && polic == 0) total ++;
    else if (x == -1 && polic > 0) polic--;
  }

  cout << total << "\n";
}