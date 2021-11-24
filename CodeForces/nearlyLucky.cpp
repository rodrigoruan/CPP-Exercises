#include <bits/stdc++.h>

using namespace std;

int main()
{
  long long a;
  int j = 0;
  cin >> a;

  string res = to_string(a);

  for(int i = 0; i < res.size(); i ++) {
    if(res[i] == '7' || res[i] == '4') {
      j ++;
    }
  }

  if(j == 4 || j == 7) {
    cout << "YES" << "\n";
  } else {
    cout << "NO" << "\n";
  }
}