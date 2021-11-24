#include <bits/stdc++.h>

using namespace std;

int main()
{
  int a;
  cin >> a;
  for (int i = 0; i < a; i++)
  {
    vector<string> obj = {"PROXYCITY",
                          "P.Y.N.G.",
                          "DNSUEY!",
                          "SERVERS",
                          "HOST!",
                          "CRIPTONIZE",
                          "OFFLINE DAY",
                          "SALT",
                          "ANSWER!",
                          "RAR?",
                          "WIFI ANTENNAS"};
    int x, y;
    cin >> x >> y;

    cout << obj[x + y] << "\n";
  }
}