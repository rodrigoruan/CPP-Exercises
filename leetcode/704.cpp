#include <bits/stdc++.h>

using namespace std;

int main() {
  vector<int> x = {0,3,5,9};
  int L=0, R=x.size()-1;

  while(L <= R) {
    float mid = L + (R - L) / 2;
    cout << mid << endl;
    if(x[mid] == 9) cout << "ACHOU";
    if(x[mid] < 9) L = mid + 1;
    else R = mid - 1;
  }
  cout << -1;
};