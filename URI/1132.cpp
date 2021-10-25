#include <iostream>

using namespace std;

int main() {
  int a, b;
  cin >> a >> b;
  int res = 0;
  int max = a > b ? a : b;
  int min = a < b ? a : b;

  for(int i = min; i <= max; i++) {
    if(i % 13 != 0) {
      res += i;
    }
  }

  cout << res << endl;
}