#include <bits/stdc++.h>

using namespace std;

int main() {
  int n; cin >> n;
  vector<int> arr = {};
  map<int, string> obj;

  while(n--) {
    string a, b; int c;
    cin >> a >> b >> c;
    string res = a + ' ' + b + ' ' + to_string(c);

    arr.push_back(c);
    obj[c] = res;
  }

  sort(arr.begin(),arr.end());

  for(int c : arr) {
    cout << obj[c] << "\n";
  }
}