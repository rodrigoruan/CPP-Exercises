#include <bits/stdc++.h>

using namespace std;

int main() {
  string alp = "ABCDEFGHIJKLMNOP";

  for(int i = 0; i < 8; i += 1) {
    int a, b; cin >> a >> b;
    if(a > b) alp.erase(i+1, 1);
    else alp.erase(i, 1);
  }

  for(int i = 0; i < 4; i += 1) {
    int a, b; cin >> a >> b;
    if(a > b) alp.erase(i+1, 1);
    else alp.erase(i, 1);
  }

  for(int i = 0; i < 2; i += 1) {
    int a, b; cin >> a >> b;
    if(a > b) alp.erase(i+1, 1);
    else alp.erase(i, 1);
  }

  int a, b; cin >> a >> b;

  if(a > b) cout << alp[0] << "\n";
  else cout << alp[1] << "\n";
}