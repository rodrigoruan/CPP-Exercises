#include <iostream>

using namespace std;

int main() {
  string b, c;
  int a, res=0;
  cin >> a >> b >> c;

  for(int i = 0; i < a; i++) {
    if(b[i] == c[i]) res++;
  }

  cout << res << endl;
}