#include <bits/stdc++.h>

using namespace std;

int main() {
  int n; cin >> n;
  vector<int> arr = {};

  for(int i = 0; i < n; i ++) {
    int x; cin >> x; arr.push_back(x);
  }

  for(int i = 0; i < arr.size(); i++) {
    for(int j = i + 1; j < arr.size(); j++) {
      if(arr[i] > arr[j]) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  }

  for(int c : arr) cout << c<< " ";
}