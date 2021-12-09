#include <bits/stdc++.h>

using namespace std;

int indexOf(char l, string alp) {
  for(int i = 0; i < alp.size(); i++) {
    if(alp[i] == l) return i;
  }
}

int main () {
  char l; cin >> l; string s; cin >> s;

  string alp = "qwertyuiopasdfghjkl;zxcvbnm,./";
  string res = "";

  for(char c : s) {
    res += l == 'R' ? alp[indexOf(c, alp) - 1] : alp[indexOf(c, alp) + 1];
  }

  cout << res << "\n";
}