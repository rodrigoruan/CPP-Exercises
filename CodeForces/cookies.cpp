#include <bits/stdc++.h>

using namespace std;

int main() {
  int n; cin >> n;

  vector<int> arr = {};

  for(int i = 0; i < n; i++) {
    int x; cin >> x; arr.push_back(x);
  }

  int final = 0;

  for(int i = 0; i < arr.size(); i++) {
    int res = 0;
    for(int j = 0; j < arr.size(); j++) {
      if(i != j) res += arr[j]; 
    }
    if(res % 2 == 0) final ++;
  }

  cout << final << "\n";
}