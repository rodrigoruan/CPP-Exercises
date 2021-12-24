#include <bits/stdc++.h>

using namespace std;

int main() {
  int n; cin >> n; n--;
  vector<int> arr = {};

  while(n--) {
    int y; cin >> y; arr.push_back(y);
  }

  int a, b; cin >> a >> b;

  int res = 0;

  for(int i = a - 1; i < arr.size() && i < b - 1; i += 1) {
    res += arr[i];
  }

  cout << res << "\n";
}