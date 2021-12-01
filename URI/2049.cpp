#include <bits/stdc++.h>

using namespace std;

int main() {
  string a, b;
  cin >> a >> b;
  for(int i = 1;; i++) {
    cout << "Instancia " << i << "\n";

    if(strstr(b.c_str(), a.c_str())) {
      cout << "verdadeira" << "\n";
    } else {
      cout << "falsa" << "\n";
    }

    cin >> a;
    if(a == "0") break;
    cin >> b;
    if(b == "0") break;

    cout << endl;
  }
}