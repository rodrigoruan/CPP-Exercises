#include <bits/stdc++.h>

using namespace std;

int main() {
  int n; cin >> n;
  vector<int> arr = {};

  for(int i = 0; i < n; i++) {
    int x; cin >> x;
    if(!count(arr.begin(), arr.end(), x)) arr.push_back(x);
  }

  sort(arr.begin(), arr.end());

  if(arr.size() == 1) cout << "NO" << "\n";
  else cout << arr[1] << "\n";
}