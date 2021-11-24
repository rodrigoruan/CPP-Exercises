#include <bits/stdc++.h>

using namespace std;

int main() {
  string x;
  int l=0, u=0;
  cin >> x;

  for(int i = 0; i < x.size(); i ++) {
    if(tolower(x[i]) == x[i]) l++;
    else u++;
  }

  for(int i = 0; i < x.size(); i ++) {
    if(u > l) x[i] = toupper(x[i]);
    else x[i] = tolower(x[i]);
  }

  cout << x << "\n";
}