#include <iostream>
using namespace std;

int main() {
  int A, B, RES;
  cin >> A;
  cin >> B;
  RES = A + B;

  if((A + B) % 2 == 0) {
    cout << "Bino";
  } else {
    cout << "Cino";
  }
}