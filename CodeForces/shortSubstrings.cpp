#include <bits/stdc++.h>

using namespace std;

int main() {
  int n; cin >> n;

  while(n--) {
    string x; cin >> x;
    vector<string> arr = {};

    for(int i = 0; i < x.size(); i += 2) {
      arr.push_back(x.substr(i, i+2));
    }

    string res = "";

    for(string c : arr) res += c[0];
    string final = arr[arr.size() - 1];
    res += final[final.size() - 1];
    
    cout << res << "\n";
  }
}