#include <bits/stdc++.h>

using namespace std;

int main() {
  int n; cin >> n;
  map<string, int> obj = {};
  vector<string> arr = {};

  while(n--) {
    string x; cin >> x;

    if(obj[x]) {
      arr.push_back(x+to_string(obj[x]));
      cout << x+to_string(obj[x]) << "\n";
      obj[x]++;
    } else {
      obj[x] = 1;
      arr.push_back(x);
      cout << "OK" << "\n";
    }
  }
}