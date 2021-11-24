#include <bits/stdc++.h>

using namespace std;

string toLower(string str)
{
  for (int i = 0; i < str.size(); i += 1)
  {
    str[i] = tolower(str[i]);
  }

  return str;
}

int main()
{
  string a, b;
  int v = 0;
  cin >> a >> b;

  a = toLower(a), b = toLower(b);

  for(int i = 0; i <= a.length(); i ++) {
    if(int(a[i]) < int(b[i])) {
      cout << -1 << "\n";
      v = 1;
      break;
    } else if(int(a[i]) > int(b[i])) {
      cout << 1 << '\n';
      v = 1;
      break;
    }
  }

  if(v == 0) {
    cout << 0 << "\n";
  }
}