#include <bits/stdc++.h>

using namespace std;

int main()
{
  int a, x, y, n1 = 0, n2 = 0;
  cin >> a;
  while(a != 0) {
    for(int i = 0; i < a; i += 1) {
      cin >> x >> y;
      if(x > y) n1++;
      else if(x < y) n2++;
    }
    cout << n1 << " " << n2 << endl;
    n1 = 0, n2 = 0;
    cin >> a;
  }
}