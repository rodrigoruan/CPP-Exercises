#include <bits/stdc++.h>

using namespace std;

bool verifyPrime(int a) {
  for(int i = 2; i < a; i++) {
    if(a % i == 0) return false;
  }
  return a > 1;
}

int main() {
  int n; cin >> n; int res = 0;
  vector<int> arr = {};

  while(cin) {
    for(int i = 1; i <= n; i++) {
        int x; cin >> x; arr.push_back(x);
        if(i == n) {
          int y; cin >> y;
          for(int j = arr.size() - 1; j >= 0; j -= y) res += arr[j];
          string result = verifyPrime(res) ? "You’re a coastal aircraft, Robbie, a large silver aircraft." : "Bad boy! I’ll hit you.";
          cout << result << "\n";
          res = 0;
          arr.clear();
          cin >> n;
        }
      }
    }
}