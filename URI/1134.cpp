#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;

  vector<int> arr = {0, 0, 0};

  while (n != 4) {
    cin >> n;
    if(n == 1) arr[0]++;
    if(n == 2) arr[1]++;
    if(n == 3) arr[2]++;
  }

  cout << "MUITO OBRIGADO" << "\n";
  cout << "Alcool: " << arr[0] << "\n";
  cout << "Gasolina: " << arr[1] << "\n";
  cout << "Diesel: " << arr[2] << "\n";
}