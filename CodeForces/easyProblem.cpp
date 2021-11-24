#include <bits/stdc++.h>

using namespace std;

int main() {
  int a;
  string res;
  cin >> a;

  for(int i = 0; i < a; i++) {
    int x;
    cin >> x;
    if(x == 1) res = "HARD";
  }

  if(res != "HARD") res = "EASY";

  cout << res << "\n";
}