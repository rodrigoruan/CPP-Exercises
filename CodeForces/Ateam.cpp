#include <bits/stdc++.h>

using namespace std;

int main()
{
  int x, z = 0;
  cin >> x;
  for (int i = 0; i < x; i++)
  {
    int a, b, c, res = 0;
    cin >> a >> b >> c;

    if (a == 1)
      res++;
    if (b == 1)
      res++;
    if (c == 1)
      res++;

    if (res >= 2)
      z++;
  }
  cout << z << "\n";
}