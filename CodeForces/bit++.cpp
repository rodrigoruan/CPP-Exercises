#include <bits/stdc++.h>

using namespace std;

int main() {
  int a, x=0;
  cin >> a;

  for(int i = 0 ; i < a; i++) {
    string c;
    cin >> c;

    if(c == "++X" || c == "X++") x++;
    else x--;
  }

  cout << x << "\n";
}