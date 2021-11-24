#include <bits/stdc++.h>

using namespace std;

int main()
{
  int a;
  cin >> a;

  string b = to_string(a);
  string c = to_string(a);

  reverse(c.begin(), c.end());

  bool res = b.compare(c);

  return res == 0;
}