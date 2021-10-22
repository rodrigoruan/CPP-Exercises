#include <iostream>

using namespace std;

int main() {
  int a;
  cin >> a;
  if(a % 2 == 0) {
    a += 1;
  }

  for(int i = 0; i < 6; i ++) {
    cout << a << endl;
    a += 2;
  }
}