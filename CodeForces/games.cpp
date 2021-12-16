#include <bits/stdc++.h>

using namespace std;

int main() {
  int n; cin >> n;
  vector<vector<int>> arr = {};

  for(int i = 0; i < n; i += 1) {
    vector<int> x = {};
    int a, b; cin >> a >> b;  x.push_back(a); x.push_back(b);
    arr.push_back(x);
  }

  int res = 0;

  for(int i = 0; i < arr.size(); i ++) {
    for(int j = 0; j < arr.size(); j++) {
      if(i != j && arr[i][0] == arr[j][1]) res += 1;
    } 
  }

  cout << res << "\n";
}