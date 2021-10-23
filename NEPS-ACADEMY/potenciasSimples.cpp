#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main() {
  double a, b;
  cin >> a >> b;

  cout << fixed << setprecision(4) << pow(a, b) << endl;
}