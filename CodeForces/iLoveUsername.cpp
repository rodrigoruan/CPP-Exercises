#include <bits/stdc++.h>

using namespace std;

int main() {
  int n; cin >> n;
  int x; cin >> x;

  vector<int> arr = {x};
  int res = 0;

  for(int i = 0; i < n - 1; i ++) {
    int y; cin >> y;
    sort(arr.begin(), arr.end());
    if(y > arr[arr.size() - 1] || y < arr[0]) {
      res += 1;
    }
  
    arr.push_back(y);
  }

  cout << res << "\n";
}