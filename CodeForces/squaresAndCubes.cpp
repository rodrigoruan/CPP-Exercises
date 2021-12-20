#include <bits/stdc++.h>

using namespace std;
 
int main()
{
    int n; cin >> n;
    while(n) {
      n--;
      int x; cin >> x;
      cout << (int)sqrt(x) + (int)cbrt(x) - (int)(sqrt(cbrt(x))) << "\n";
    }
}