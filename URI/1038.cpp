#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  int a, b;
  cin >> a >> b;

  if(a == 1) {
    cout << "Total: R$ " << fixed << setprecision(2) << 4.00 * b << endl;
  } else if(a == 2) {
    cout << "Total: R$ " << fixed << setprecision(2) <<  4.50 * b << endl;
  } else if(a == 3) {
    cout << "Total: R$ " << fixed << setprecision(2) <<  5.00 * b << endl;
  } else if(a == 4) {
    cout << "Total: R$ " << fixed << setprecision(2) <<  2.00 * b << endl;
  } else {
    cout << "Total: R$ " << fixed << setprecision(2) <<  1.50 * b << endl;
  }
}