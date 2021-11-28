#include <bits/stdc++.h>

using namespace std;

int main() {
  vector<int> arr = {};
  int n;
  string s;
  cin >> n >> s;

  for(int i = 0; i < s.size(); i++) {
    if(!count(arr.begin(), arr.end(), tolower(s[i]))) {
      arr.push_back(tolower(s[i]));
    }
  }

  string res = arr.size() == 26 ? "YES" : "NO";

  cout << res << "\n";
}