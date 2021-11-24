#include <bits/stdc++.h>

using namespace std;

int main() {
  int h, e, a, o, w, x;
  cin >> h >> e >> a >> o >> w >> x;

  int bem = h + e + a + x;
  int mal = o + w;

  if(bem >= mal) {
    cout << "Middle-earth is safe." << "\n";
  } else {
    cout << "Sauron has returned." << "\n";
  }
}