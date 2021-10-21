#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  string a;
  double b, c;
  cin >> a >> b >> c;
  cout << "TOTAL = R$ " << fixed << setprecision(2) << b + (c/100)*15 << endl;
}