#include <bits/stdc++.h>

using namespace std;

int main() {
  int n; cin >> n;
  while(n--) {
    int k; cin >> k;
    int sum = 0;
    for(int i = 0; i < k; i ++) {
      string s; cin >> s;
      for(int j = 0; j < s.size(); j ++) {
        sum += (int)s[j]-65 + i + j;
      }
    }
    cout << sum << "\n";
  }
}