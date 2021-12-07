#include <bits/stdc++.h>

using namespace std;

int main() {
  int n; cin >> n;
  string s; cin >> s;

  int res = 0; char last = s[0];

  for(int i = 1; i < s.size(); i ++) {
    if(s[i] == last) res++;
    last = s[i];
  } 

  cout << res << "\n";
}