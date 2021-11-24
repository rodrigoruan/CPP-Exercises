#include <bits/stdc++.h>

using namespace std;

int main()
{
  int x;
  cin >> x;
  for (int i = 0; i < x; i++)
  {
    string a;
    cin >> a;

    if (a.length() > 10)
    {
      cout << a[0] << a.length() - 2 << a[a.length() - 1] << "\n";
    }
    else
    {
      cout << a << "\n";
    }
  }
}