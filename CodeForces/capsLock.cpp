#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
  string a;
  bool allUpper = false;
  cin >> a;

  for(int i = 1; i < a.size(); i++) {
    if(a[i] == tolower(a[i])) {
      cout << a << "\n";
      return 0;
    }
  }

  if(isupper(a[0])) {
    allUpper = true;
  } else {
    a[0] = toupper(a[0]);
  }

  for(int i = allUpper ? 0 : 1; i < a.size(); i++) {
    a[i] = tolower(a[i]);
  }
  
  cout << a << "\n";
}