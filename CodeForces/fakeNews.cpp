#include <bits/stdc++.h>

using namespace std;

int main() {
  string s; cin >> s;
  string v = "";

  for(int i = 0; i < s.size() && v != "heidi"; i ++) {
    if(s[i] == 'h' && v == "") v += 'h';
    if(s[i] == 'e' && v == "h") v += 'e';
    if(s[i] == 'i' && v == "he") v += 'i';
    if(s[i] == 'd' && v == "hei") v += 'd';
    if(s[i] == 'i' && v == "heid") v += 'i';
  }

  if(v == "heidi") cout << "YES" << "\n"; else cout << "NO" << "\n";
}