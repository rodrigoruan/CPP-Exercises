#include <iostream>

using namespace std;

int main() {
  int a, b;
  cin >> a >> b;
  int max = a > b ? a : b;
  int min = a < b ? a : b;

  for(int i=min+1; i < max; i++) {
    if(i%5==2 || i%5==3) {
      cout << i << endl;
    }
  }
}