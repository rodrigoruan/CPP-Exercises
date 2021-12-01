#include <bits/stdc++.h>

using namespace std;

int main() {
  int idx=-1, v=0;
  vector<int> arr = {};

  for(int i = 1; i <= 100; i ++) {
    int a;
    cin >> a;
    if(a > v) {
      v = a;
      idx = i;
    }
  }

  cout << v << "\n" << idx << "\n";
}