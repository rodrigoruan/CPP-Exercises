#include <bits/stdc++.h>

using namespace std;

int main()
{
  int a, res = 0;
  vector<int> x = {5, 4, 3, 2, 1};
  cin >> a;

  while (a > 0)
  {
    for (int i = 0; i < x.size(); i++)
    {
      if (a >= x[i])
      {
        a -= x[i];
        res++;
        break;
      }
    }
  }

  cout << res << endl;
}