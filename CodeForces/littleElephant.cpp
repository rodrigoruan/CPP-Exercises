#include <bits/stdc++.h>

using namespace std;

int indexOf(int n, vector<int> arr) {
  for(int i = 0; i < arr.size(); i += 1) {
    if(arr[i] == n) {
      return i;
    }
  }
}

int main() {
  int n; cin >> n;
  vector<int> arr = {};
  vector<int> normal = {};
  long long min = 9039218390128301;

  for(int i = 0; i < n; i += 1) {
    int x; cin >> x; arr.push_back(x);
    normal.push_back(x);
    if(x < min) min = x;
  }

  sort(arr.begin(), arr.end());

  if(arr[0] == arr[1]) {
    cout << "Still Rozdil" << "\n";
    return 0;
  }

  int idx = indexOf(min, normal);

  cout << idx + 1 << "\n";
}