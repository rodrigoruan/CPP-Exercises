#include <bits/stdc++.h>

using namespace std;

int main() {
  int n; cin >> n;

  while(n--) {
    string s; cin >> s;
    vector<char> arr = {};

    string res = "Yes";

    for(char c : s) {
      if(!count(arr.begin(), arr.end(), c)) arr.push_back(c);
    }

    if(arr.size() != s.size()) res = "No";

    sort(arr.begin(), arr.end());

    int last = (int)arr[0];

    for(int i = 1; i < arr.size(); i += 1) {
      if(abs((int)arr[i]-last) != 1) res = "No";
      last = (int)arr[i];
    }

    cout << res << "\n";
  }
}