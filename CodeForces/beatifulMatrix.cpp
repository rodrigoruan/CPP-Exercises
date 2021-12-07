#include <bits/stdc++.h>

using namespace std;

int main() {
  vector<vector<int>> arr = {};
  int h, v;

  for(int i = 0; i < 5; i++) {
    vector<int> x = {};
    for(int j = 0; j < 5; j++) {
      int b; cin >> b; x.push_back(b);
      if(b == 1) {
        h = i;
        v = j;
      }
    }
    arr.push_back(x);
  }

  cout << abs(h - 2) + abs(v - 2) << "\n";
}