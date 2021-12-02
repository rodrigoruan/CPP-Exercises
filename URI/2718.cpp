#include <bits/stdc++.h>

using namespace std;

int main() {
  long long n; cin >> n;
  for(int i = 0; i < n; i++) {
    long long x, t=0, res=0; cin >> x;
    string r = bitset<128>(x).to_string();
    for(char ch : r) {
      if(ch == '1') {
        t++;
        if(t > res) res = t;
      } else {
        t = 0;
      }
    }
    cout << res << "\n";
  }
}