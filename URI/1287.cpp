#include <bits/stdc++.h>

using namespace std;

int main() {
  string x;
  while(getline(cin, x)) {

    x = regex_replace(x, regex("[Oo]"), "0");
    x = regex_replace(x, regex("l"), "1");
    x = regex_replace(x, regex("[^\\d]"), "");

    bool onlyNum = regex_search(x, regex("^\\d+$"));
    bool numLength = regex_search(x, regex("^\\d{0, 11}$"));

    long long num = onlyNum && numLength ? stol(x) : 0;

    if(!onlyNum || !numLength || num > 2147483647) {
      cout << "error" << "\n";
    } else {
      cout << x << "\n";
    }
  }
}