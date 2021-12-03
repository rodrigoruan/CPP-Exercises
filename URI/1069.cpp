#include <bits/stdc++.h>

using namespace std;

int main() {
  int n; cin >> n;

  for(int i = 0; i < n; i++) {
    string s; cin >> s;
    int l=0, r=0, res=0;
    s = regex_replace(s, regex("\\."), "");

    for(char c : s) {
      if(c == '<') l++;
      if(c == '>') r++;
    }

    while(l > 0 && r > 0) {
      l--; r--; res++;
    }

    cout << res << "\n";
  }
}