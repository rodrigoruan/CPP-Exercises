#include <bits/stdc++.h>

using namespace std;

int main() {
  string a;
  cin >> a;

  if(regex_search(a.begin(), a.end(), regex("1111111")) || regex_search(a, regex("0000000"))) {
    cout << "YES" << "\n";
  } else {
    cout << "NO" << "\n";
  }
}