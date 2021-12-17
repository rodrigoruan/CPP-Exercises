#include <bits/stdc++.h>

using namespace std;

int main() {
  int n; cin >> n;
  vector<int> arr = {1, 1};

  while(arr.size() < n) {
    arr.push_back(arr[arr.size() - 1] + arr[arr.size() - 2]);
  }

  reverse(arr.begin(), arr.end());

  string res = "";

  for(int i = 0; i < n; i++) {
    if(i < n - 1) res += to_string(arr[i]) + " ";
    else res += to_string(arr[i]);
  }

  cout << res << "\n";
}