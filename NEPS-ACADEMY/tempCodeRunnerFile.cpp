#include <iostream>
#include <vector>

using namespace std;

int main() {
  int a;
  vector<int> arr = {1, 1};
  cin >> a;

  for(int i = 0; i < a; i++) {
    arr.push_back(arr[i] + arr[i-1]);
  }

  cout << arr[a] << endl;
}