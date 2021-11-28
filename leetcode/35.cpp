#include <bits/stdc++.h>

using namespace std;

int main()
{
  vector<int> x = {1, 3, 5, 6};
  int res = 0;

  if (count(x.begin(), x.end(), 7) == 0)
  {
    for (int i = 0; i < x.size(); i++)
    {
      if (x[i] + 1 == 7)
      {
        res = i + 1;
      } else if(x[i] - 1 == 7) {
        res = i;
      }
    }
  } else {
    res = count(x.begin(), x.end(), 7);
  }

  cout << res << endl;
}