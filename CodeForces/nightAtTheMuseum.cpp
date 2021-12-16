#include <bits/stdc++.h>

using namespace std;

int indexOf(string alp, char letter) {
  for(int i = 0; i < alp.size(); i++) {
    if(alp[i] == letter) return i;
  }
}

int lastIndexOf(string alp, char letter) {
  int lastIdx = 0;
  for(int i = 0; i < alp.size(); i++) {
    if(alp[i] == letter) lastIdx = i;
  }
  return lastIdx;
}

int main() {
  string alp = "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyz";

  string s = "a";
  string x; cin >> x;
  s += x;

  int res = 0;

  for(int i = 0; i < s.size() - 1; i++) {
    res += min({ 
      abs(indexOf(alp, s[i]) - indexOf(alp, s[i + 1])),
      abs(lastIndexOf(alp, s[i]) - lastIndexOf(alp, s[i + 1])),
      abs(indexOf(alp, s[i]) - lastIndexOf(alp, s[i + 1])),
      abs(lastIndexOf(alp, s[i]) - indexOf(alp, s[i + 1]))
    });
  }
  
  cout << res << "\n";
}