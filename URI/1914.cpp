#include <bits/stdc++.h>

using namespace std;

int main() {
  int n; cin >> n;
  
  for(int i = 0; i < n; i++) {
    string a, a1, b, b1; cin >> a >> a1 >> b >> b1;
    int x, y; cin >> x >> y;
    string res = (x + y) % 2 == 0 ? "PAR" : "IMPAR";
    
    if(a1 == res) cout << a << "\n";
    else cout << b << "\n";
  }
}