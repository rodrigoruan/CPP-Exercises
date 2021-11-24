#include <bits/stdc++.h>

using namespace std;

string convertToBinary(unsigned int n)
{
  string r;
  while (n != 0)
  {
    r = (n % 2 == 0 ? "0" : "1") + r;
    n /= 2;
  }
  return r;
}

int main()
{
  int res = 0;

  for (int i = 0; i < 4; i++)
  {
    int sum = 0;
    for (int i = 0; i < 7; i++)
    {
      int a;
      cin >> a;
      sum += a;
    }
    if (sum > res)
      res = sum;
  }

  cout << res << " = " << convertToBinary(res) << endl;
}