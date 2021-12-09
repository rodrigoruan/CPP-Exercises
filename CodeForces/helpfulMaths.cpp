#include <bits/stdc++.h>

using namespace std;

int main() {
  string s; cin >> s;
  int res = 0;
  vector<char> arr = {};

  for(char c : s) {
    if(isdigit(c)) arr.push_back(c);
  }

  for(int i = 0; i < arr.size(); i ++) {
    for(int j = i + 1; j < arr.size(); j++) {
      if(arr[j] < arr[i]) {
        int temp = arr[j];
        arr[j] = arr[i];
        arr[i] = temp;
      }
    }
  }

  string v = "";

  for(int i = 0; i < arr.size(); i++) {
    v += arr[i];
    if(i != arr.size() - 1) v += '+';
  }

  cout << v << "\n";
}