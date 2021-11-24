#include <bits/stdc++.h>

using namespace std;

int main()
{
  string x, v;
  cin >> x;

  for(int i = 0; i < x.length(); i ++) {
    if(!count(v.begin(), v.end(), x[i])) {
      v += x[i];
    }
  }

  if(v.length() % 2 == 0) {
    cout << "CHAT WITH HER!" << "\n";
  } else {
    cout << "IGNORE HIM!" << "\n";
  }
}