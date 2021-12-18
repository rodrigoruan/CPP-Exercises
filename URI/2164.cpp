#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n;
  cin >> n;

  double raiz5 = sqrt(5);
  double termo1 = pow((1 + raiz5) / 2.0, n);
  double termo2 = pow((1 - raiz5) / 2.0, n);
  double resposta = (termo1 - termo2) / raiz5;

  cout << fixed << setprecision(1) << resposta << endl;
}