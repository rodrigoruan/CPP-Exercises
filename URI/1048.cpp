#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  double a;
  cin >> a;

  if(a > 2000) {
    cout << "Novo salario: " << fixed << setprecision(2) << a + (a/100*4) << endl;
    cout << "Reajuste ganho: " << fixed << setprecision(2) << (a/100*4) << endl;
    cout << "Em percentual: 4 %" << endl;
  } else if(a <= 2000 && a >= 1200.01) {
    cout << "Novo salario: " << fixed << setprecision(2) << a + (a/100*7) << endl;
    cout << "Reajuste ganho: " << fixed << setprecision(2) << (a/100*7) << endl;
    cout << "Em percentual: 7 %" << endl;
  } else if(a <= 1200 && a >= 800.01) {
    cout << "Novo salario: " << fixed << setprecision(2) << a + (a/100*10) << endl;
    cout << "Reajuste ganho: " << fixed << setprecision(2) << (a/100*10) << endl;
    cout << "Em percentual: 10 %" << endl;
  } else if(a <= 800 && a >= 400.01) {
    cout << "Novo salario: " << fixed << setprecision(2) << a + (a/100*12) << endl;
    cout << "Reajuste ganho: " << fixed << setprecision(2) << (a/100*12) << endl;
    cout << "Em percentual: 12 %" << endl;
  } else {
    cout << "Novo salario: " << fixed << setprecision(2) << a + (a/100*15) << endl;
    cout << "Reajuste ganho: " << fixed << setprecision(2) << (a/100*15) << endl;
    cout << "Em percentual: 15 %" << endl;
  }
}