#include <bits/stdc++.h>

using namespace std;

int main() {
  int n; cin >> n;
  vector<string> arr = {}; int max = 0;
  for(int i = 0; i <= n; i ++) {
    if(i == n) {
      for(string c : arr) {
        string res = "";
        for(int k = 0; k < max - c.size(); k++) res += " ";
        cout << res + c << "\n";
      }
      cin >> n;
      i = 0;
      max = 0;
      arr.clear();
      if(n==0)break;
      cout << "\n";
    }
    string x; cin >> x; arr.push_back(x);
    if(x.size() > max) max = x.size();
  }
}