#include <bits/stdc++.h>

using namespace std;

int main() {
  string x;
  cin >> x;

  cout << toupper(x[0]) << x.substr(1, x.length()) << "\n";
}