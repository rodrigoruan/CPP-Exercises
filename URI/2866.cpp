#include <bits/stdc++.h>

using namespace std;

int main() {
  int a;
  cin >> a;
  for(int i = 0; i < a; i ++) {
    string x, y;
    cin >> x;

    for(int i = 0; i < x.size(); i++) {
      if(x[i] == tolower(x[i])) y += x[i];
    }

    reverse(y.begin(), y.end());

    cout << y << endl;
  }
}