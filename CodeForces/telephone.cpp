#include <bits/stdc++.h>

using namespace std;

int main() {
  int n; cin >> n;

  while(n--) {
    int a; string b; cin >> a >> b;

    if(regex_search(b, regex("8\\d{10,}"))) {
      cout << "YES" << "\n";
    } else {
      cout << "NO" << "\n";
    }
  }
}