#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, k; cin >> n >> k;

  vector<int> arr = {};

  for(int i = 0; i < n; i += 1) {
    int y; cin >> y; arr.push_back(y);
  }

  int minScore = arr[k - 1], res = 0;

  for(int c : arr) {
    if(c >= minScore && c > 0) res += 1;
  }

  cout << res << endl;
}