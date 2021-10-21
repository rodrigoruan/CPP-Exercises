#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  int a, b, c, res;
  cin >> a >> b >> c;
  res = (a + b + abs(a - b)) / 2;
  
  if(c > res) {
    cout << c << " eh o maior" << endl;
  } else {
    cout << res << " eh o maior" << endl;
  }
}