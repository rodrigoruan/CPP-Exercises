#include <bits/stdc++.h>

using namespace std;

bool onlyDistincts(string nums) {
  vector<char> arr = {};

  for(char c : nums) {
    if(count(arr.begin(), arr.end(), c)) return false;
    arr.push_back(c);
  }

  return true;
}

int main() {
  long long n; cin >> n;

  for(long long i = n + 1;; i ++) {
    string nums = to_string(i);
    if(onlyDistincts(nums)) { 
      cout << i << "\n";
      break;
    }
  }
}