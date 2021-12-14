#include <bits/stdc++.h>

using namespace std;

int indexOf(vector<int> arr, int el) {
  for(int i = 0; i < arr.size(); i++) {
    if(arr[i] == el) return i;
  }
}

int main() {
  int n; cin >> n;
  vector<int> odd = {};
  vector<int> even = {};
  vector<int> arr = {};

  for(int i = 0; i < n; i ++) {
    int y; cin >> y;
    if(y%2==0) even.push_back(y);
    else odd.push_back(y);
    arr.push_back(y);
  }

  if(odd.size() == 1) cout << indexOf(arr, odd[0]) + 1 << "\n";
  else cout << indexOf(arr, even[0]) + 1 << "\n";
}