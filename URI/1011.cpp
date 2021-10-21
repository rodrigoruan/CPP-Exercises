#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main()
{
  int a;
  cin >> a;
  cout << "VOLUME = " << fixed << setprecision(3) << (4.0 / 3) * 3.14159 * pow(a, 3) << endl;
}