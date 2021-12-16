#include <bits/stdc++.h>

using namespace std;

int main() {
  vector<int> arr = {};

  for(int i = 0; i < 4; i ++) {
    int x; cin >> x;
    if(!count(arr.begin(), arr.end(), x)) arr.push_back(x);
  }

  cout << 4 - arr.size() << "\n";
}