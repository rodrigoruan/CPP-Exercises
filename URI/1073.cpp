#include <iostream>

using namespace std;

int main() {
  int a;
  cin >> a;

  for(int i = 2; i <= a; i += 2) {
    cout << i << "^" << 2 << " = " << i*i << endl;
  }
}