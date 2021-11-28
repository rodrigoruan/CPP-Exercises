#include <bits/stdc++.h>

using namespace std;

int main()
{
  int k, n, w, res = 0;
  cin >> k >> n >> w;

  for (int i = 1; i <= w; i++)
  {
    res += k * i;
  }

  if (res - n < 0)
    cout << 0 << "\n";
  else
    cout << res - n << "\n";
}