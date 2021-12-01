#include <bits/stdc++.h>

using namespace std;

int main() {
  string s;
  int x = 1;
  cin >> s;
  while(true) {
    string l = s, h = s;
    if(s == "*") return 0;

    for(int i = 0; i < s.size(); i++) {
      char f = s[0];
      s.erase(0, 1);
      s += f;

      if(s < l) l = s;
      if(s > h) h = s;
    }
    cout << "Caso " << x << ": " << l << " " << h << "\n";
    x++;
    cin >> s;
  }
}