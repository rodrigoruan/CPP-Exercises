#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, m; cin >> n >> m;

  vector<int> arr = {};

  while(n--) {
    int x; cin >> x; arr.push_back(x);
  }

  int total = 0;

  sort(arr.begin(), arr.end());

  for(int i = arr.size() - 1, j = 0; j < m; i -= 1) {
    total += 1;
    j += arr[i];
  }

  cout << total << "\n";
}