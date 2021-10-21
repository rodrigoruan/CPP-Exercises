#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  int a1, b1, a2, b2;
  double c1, c2;
  cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2;
  cout << "VALOR A PAGAR: R$ " << fixed << setprecision(2) << (b1 * c1) + (b2 * c2) << endl;
}