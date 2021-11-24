#include <bits/stdc++.h>

using namespace std;

int main()
{
  string x, fl;
  cin >> x;

  fl = toupper(x[0]);
  
  cout << fl << x.substr(1, x.length()) << "\n";
}