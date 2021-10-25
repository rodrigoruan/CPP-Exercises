#include <iostream>

using namespace std;

int main()
{
  int a, b;
  cin >> a >> b;

  int res = 0;
  int max = a > b ? a : b;
  int min = max == a ? b : a;

  for (int i = min + 1; i < max; i += 1)
  {
    if (i % 2 != 0)
    {
      res += i;
    }
  }

  cout << res << endl;
}