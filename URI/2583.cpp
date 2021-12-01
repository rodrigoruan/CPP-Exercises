#include <bits/stdc++.h>

using namespace std;

int main() {
  int n; cin >> n;
  for(int i = 0; i < n; i++) {
    int x; cin >> x;
    vector<string> arr = {};

    for(int j = 0; j < x; j++) {
      string a, b; cin >> a >> b;
      auto element = find(arr.begin(), arr.end(), a);
  
      if(count(arr.begin(), arr.end(), a) && b != "chirrin") {
        for(int k = 0; k < arr.size(); k++) {
          if(arr[k] == a) arr.erase(element);
        }
      }

      if(b == "chirrin") arr.push_back(a);
    }
  
    cout << "TOTAL" << "\n";
    sort(arr.begin(), arr.end());

    for(string c : arr) {
      cout << c << "\n";
    }
  }
}