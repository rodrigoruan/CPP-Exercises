#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, c;
  cin >> a >> b >> c;
  int arr[] = { a, b, c };
  int n = sizeof(arr) / sizeof(arr[0]);

  sort(arr, arr + n);

  for(int i = 0; i < n; i++) {
    cout << arr[i] << endl;
  }

  cout << "" << endl;

  cout << a << endl << b << endl << c << endl;
}