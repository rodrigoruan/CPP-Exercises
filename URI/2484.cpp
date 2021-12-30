#include <bits/stdc++.h>

using namespace std;

int main() {
  string s; cin >> s;
  while(s.size()) {
    vector<string> arr = {}; int l = s.size();
    while(s.size() > 0) {
      string res = "";
      for(int i = s.size(); i < l; i += 1) res += " ";
      for(char c : s) res = res + c + " ";
      arr.push_back(res.substr(0, res.size()-1));
      s = s.substr(0, s.size()-1);
    }

    for(string c : arr) cout << c << "\n";
    cout << "\n";
    cin >> s;
  }
}