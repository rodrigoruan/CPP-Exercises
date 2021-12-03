#include <bits/stdc++.h>

using namespace std;

int main() {
  int n; cin >> n;
  vector<string> arr = {};

  while(n >= 0) {
    string x; cin >> x;
    arr.push_back(x);
    n--;
    if(n == 0)  {
      sort(arr.begin(), arr.end());

      for(string l : arr) {
        cout << l << "\n";
      }

      arr.clear();

      cin >> n;
    }
  }
}