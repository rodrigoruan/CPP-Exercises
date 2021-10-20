#include <iostream>
using namespace std;

int main() {
  double A, B, RESULT;
  cin >> A;
  cin >> B;
  RESULT = (A + B) / 2;

  if(RESULT >= 7) {
    cout << "Aprovado";
  } else if (RESULT < 7 && RESULT >= 4) {
    cout << "Recuperacao";
  } else {
    cout << "Reprovado";
  }
}