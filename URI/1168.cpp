#include <bits/stdc++.h>

using namespace std;

int main() {
  int c;
  cin >> c;

  vector<int> arr={6, 2, 5, 5, 4, 5, 6, 3, 7, 6};

  for(int i = 0; i < c; i++) {
    int res=0;
    string s;
    cin >> s;

    for(char c : s) {
      int letter = int(c) - 48;
      res += arr[letter];
    }

    cout << res << " leds" << "\n";
  }
}