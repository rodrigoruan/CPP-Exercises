#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  double A;
  cin >> A;
  cout << "A=" << fixed << setprecision(4) << 3.14159 * (A * A) << endl;
}