#include <bits/stdc++.h>

using namespace std;

int main() {
  string a, b; cin >> a >> b;
  a = regex_replace(a, regex("[^\\d\\.]"), "");
  b = regex_replace(b, regex("[^\\d\\.]"), "");

  string cpf = regex_replace(a, regex("^(\\d{11}).+"), "$1");
  string lastA = regex_replace(a, regex("^\\d{11}(.+\\.\\d{2})(.+)?$"), "$1");
  b = regex_replace(b, regex("(\\d+\\.?\\d{2}).+"), "$1");

  double r1 = stold(b), r2 = stold(lastA);

  cout << "cpf " << cpf << "\n" << fixed << setprecision(2) << r1 + r2 << "\n";
}