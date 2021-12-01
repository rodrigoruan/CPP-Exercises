#include <bits/stdc++.h>

using namespace std;

int main() {
  string s;
  while(getline(cin, s)) {
    replace(s.begin(), s.end(), '@', 'a');
    replace(s.begin(), s.end(), '&', 'e');
    replace(s.begin(), s.end(), '!', 'i');
    replace(s.begin(), s.end(), '*', 'o');
    replace(s.begin(), s.end(), '#', 'u');
    cout << s << "\n";
  }
}