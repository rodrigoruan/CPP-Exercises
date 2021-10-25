#include <iostream>

using namespace std;

int main() {
  bool res = true;

  while(res) {
    int x;
    cin >> x;
    if(x == 2002) {
      res = false;
    } else {
      cout << "Senha Invalida" << endl;
    }
  }

  cout << "Acesso Permitido" << endl;
}