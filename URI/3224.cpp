#include <iostream>

using namespace std;

int main()
{
  string a, b;
  cin >> a >> b;
  string res = a.size() >= b.size() ? "go" : "no";
  cout << res << "\n";
}