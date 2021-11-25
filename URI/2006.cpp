#include <bits/stdc++.h>

using namespace std;

int main() {
  int a, res=0;
  cin >> a;

  for(int i = 0; i < 5; i ++) {
    int x;
    cin >> x;
    if(x == a) res++;
  }

  cout << res << "\n";
}