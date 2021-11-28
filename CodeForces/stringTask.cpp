#include <bits/stdc++.h>

using namespace std;

int main() {
  string a;
  cin >> a;

  regex r("[aeiouAEIOUYy]");

  string newStr = regex_replace(a, regex("[aeiouyAEIOUY]"), "");
  string resp;

  for(int i = 0 ; i < newStr.size(); i++) {
    resp += '.';
    resp += tolower(newStr[i]);
  }

  cout << resp << "\n";
}