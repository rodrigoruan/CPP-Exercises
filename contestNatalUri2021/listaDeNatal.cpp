#include <bits/stdc++.h>

using namespace std;

int main() {
  map<string, string> obj = {};

  while(true) {
    string s, p; cin >> s >> p;
    if(s == "--" && p == "--") break;

    obj[s] = p;
  }

  vector<string> names = {};

  string k;
  while(cin >> k) {
    names.push_back(k);
  }

  for(string c : names) {
    if(obj.count(c)) {
      cout << "Child: " + c << "\n";
      cout << "Gift " << obj[c] << "\n";
    } else {
      cout << "404 not found" << "\n";
    }
    cout << "\n";
  }
}