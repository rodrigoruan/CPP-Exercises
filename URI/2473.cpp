#include <bits/stdc++.h>

using namespace std;

int main() {
  vector<int> arr = {};
  for(int i = 0; i < 6; i++) {
    int a; cin >> a;
    arr.push_back(a);
  }

  int r = 0;

  for(int c = 0 ; c < 6; c++) {
    int x; cin >> x;
    if(count(arr.begin(), arr.end(), x)) r++;
  }

  if(r == 3) cout << "terno" << "\n";
  else if(r == 4) cout << "quadra" << "\n";
  else if(r == 5) cout << "quina" << "\n";
  else if(r == 6) cout << "sena" << "\n";
  else cout << "azar" << "\n";
}