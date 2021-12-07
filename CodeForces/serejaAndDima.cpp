#include <bits/stdc++.h>

using namespace std;

int main() {
  int n; cin >> n;
  vector<int> arr = {};

  for(int i = 0; i < n; i++) {
    int x; cin >> x; arr.push_back(x);
  }

  int s = 0, d = 0;

  while(arr.size() > 0) {
    if(arr[arr.size() - 1] > arr[0]) {
      s += arr[arr.size() - 1];
      arr.pop_back();
    } else {
      s += arr[0];
      arr.erase(arr.begin());
    }

    if(arr.size() == 0) break;

    if(arr[arr.size() - 1] > arr[0]) {
      d += arr[arr.size() - 1];
      arr.pop_back();
    } else {
      d += arr[0];
      arr.erase(arr.begin());
    }
  }

  cout << s << " " << d << "\n";
}