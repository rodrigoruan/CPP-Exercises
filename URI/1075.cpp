#include <iostream>

using namespace std;

int main() {
  int a;
  cin >> a;

  for(int i = 1; i <= 10000; i++) {
    if(i % a == 2) cout << i << endl;
  }
}