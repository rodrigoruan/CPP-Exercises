#include <bits/stdc++.h>

using namespace std;

int main() {
  int n; cin >> n;
  cin.ignore();
  while(n--) {
    string s; getline(cin, s);
    s = regex_replace(s, regex(".oulupukk."), "Joulupukki");
    cout << s << "\n";
  }
}