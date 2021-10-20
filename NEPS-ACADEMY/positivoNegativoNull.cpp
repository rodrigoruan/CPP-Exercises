#include <iostream>
using namespace std;

int main() {
  int A;
  cin >> A;

  if(A < 0) {
    cout << "negativo" ;
  } else if (A > 0) {
    cout << "positivo";
  } else {
    cout << "nulo";
  }
}