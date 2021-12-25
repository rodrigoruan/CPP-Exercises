#include <bits/stdc++.h>

using namespace std;

string remove(string a, char l) {
  for(int i = 0; i < a.size(); i += 1) {
    if(a[i] == l) {
      a = a.erase(i, 1);
      return a;
    }
  }
}

int main() {
  string a, b; getline(cin,a); getline(cin,b);

  for(int i = 0; i < b.size(); i += 1) {
    if(b[i] != ' ') {
      if(!count(a.begin(), a.end(), b[i])) {
        cout << "NO" << "\n";
        return 0;
      } else {
        a = remove(a, b[i]);
      }
    }
  }

  cout << "YES" << "\n";
}