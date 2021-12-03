#include <bits/stdc++.h>

using namespace std;

int main() {
  string s; cin >> s;
  int res = 0;

  for(char l : s) if(l == '1') res++;

  if(res % 2 == 0) s += '0';
  else s += '1';

  cout << s << "\n"; 
}