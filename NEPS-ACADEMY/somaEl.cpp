#include <iostream>

using namespace std;

int main()
{
  int a, res = 0;
  cin >> a;

  for (int i = 0; i < a; i++)
  {
    int x;
    cin >> x;
    res += x;
  }

  cout << res << endl;
}