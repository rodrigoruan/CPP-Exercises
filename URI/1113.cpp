#include <bits/stdc++.h>

using namespace std;

int main() {
  int a, b;
  while(true) {
    cin >> a >> b;
    if(a == b) break;
    if(a > b) cout << "Decrescente" << endl;
    else cout << "Crescente" << endl;
  }
}