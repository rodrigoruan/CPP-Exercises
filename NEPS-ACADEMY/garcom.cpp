#include <iostream>

using namespace std;

int main()
{
  int a;
  cin >> a;
  int res = 0;

  for (int i = 0; i < a; i++)
  {
    int x, y;
    cin >> x >> y;
    if (x > y)
    {
      res += y;
    }
  }

  cout << res << endl;
}