#include <bits/stdc++.h>

using namespace std;

int main() {
  int a, b;
  vector<string> arr;
  cin >> a >> b;
  for(int i = 0; i < a; i += 1) {
    string x;
    cin >> x;
    arr.push_back(x);
  }

  sort(begin(arr) , end(arr));

  cout << arr[b - 1] << endl;
}