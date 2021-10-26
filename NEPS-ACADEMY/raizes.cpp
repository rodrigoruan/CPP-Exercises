#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main() {
  int a;
  cin >> a;

  for(int i = 0; i < a; i ++) {
    double x;
    cin >> x;
    cout << fixed << setprecision(4) << sqrt(x) << endl;
  }
}