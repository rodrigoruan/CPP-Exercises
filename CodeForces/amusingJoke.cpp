#include <bits/stdc++.h>

using namespace std;

int main() {
  string a, b, c;
  cin >> a >> b >> c;

  string res = a + b;

  sort(res.begin(), res.end());
  sort(c.begin(), c.end());

  string isEqual = res == c ? "YES" : "NO";

  cout << isEqual << "\n";
}