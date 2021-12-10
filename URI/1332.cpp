#include <bits/stdc++.h>

using namespace std;

int main() {
  int n; cin >> n;

  vector<string> arr = {"one", "two"};

  for(int i = 0; i < n; i++) {
    string y; cin >> y;
  
    if(y.size() == 5) cout << 3 << "\n";
    else {
      vector<int> arra = {0, 0};
      for(int j = 0; j < 2; j++) {
        for(int k = 0; k < 3; k++) {
          if(arr[j][k] != y[k]) arra[j]++;
        }
      }
      if(arra[0] > arra[1]) cout << 2 << "\n";
      else cout << 1 << "\n";
    }
  }
}