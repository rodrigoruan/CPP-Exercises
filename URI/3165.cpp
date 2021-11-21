#include <bits/stdc++.h>

using namespace std;

bool primenumber(int number)
{
  for (int i = 2; i < number; i++)
  {
    if (number % i == 0) return 0;
  }
  return number > 1;
}

int main()
{
  int a;
  cin >> a;
  while(a > 0) {
    if(primenumber(a) && primenumber(a - 2)) {
      cout << a - 2 << " " << a << endl;
      break;
    }
    a--;
  }
}