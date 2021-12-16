#include <bits/stdc++.h>

using namespace std;

string reduceFraction(int x, int y)
{
    int d;
    d = __gcd(x, y);
 
    x = x / d;
    y = y / d;
 
  return to_string(x) + "/" + to_string(y); 
}

int main() {
  int a, b; cin >> a >> b;

  vector<int> arr = {};

  for(int i = 1; i <= 6; i++) {
    if(i >= a && i >= b) {
      arr.push_back(i);
    }
  }

  cout << reduceFraction(arr.size(), 6) << "\n";
}