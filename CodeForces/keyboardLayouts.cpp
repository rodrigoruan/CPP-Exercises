#include <bits/stdc++.h>

using namespace std;

int indexOf(string search, char letter) {
  for(int i = 0; i < search.size(); i++) {
    if(search[i] == letter) return i;
  }
}

int main() {
  string a, b, c; cin >> a >> b >> c;

  for(int i = 0; i < c.size(); i += 1) {
    if(isalpha(c[i])) {
      bool isUpper = toupper(c[i]) == c[i];
      char now = b[indexOf(a, tolower(c[i]))];
      c[i] = isUpper ? toupper(now) : tolower(now);
    }
  }

  cout << c << "\n";
}