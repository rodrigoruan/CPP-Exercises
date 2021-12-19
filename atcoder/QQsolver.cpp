#include <bits/stdc++.h>

using namespace std;

int main() {
  string s; cin >> s;

  bool f = false;

  string n1, n2;

  for(char c : s) {
    if(c == 'x') f = true;
    else if(f) n2 += c;
    else n1 += c;
  }

  cout << stoi(n1) * stoi(n2) << "\n";
}