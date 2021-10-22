#include <iostream>

using namespace std;

int main() {
  int a, b, c, d, e, f;
  cin >> a >> b >> c >> d >> e >> f;
  int arr[] = {a, b, c, d, e, f};
  int count = 0;

  for(int i = 0; i < 5; i++) {
    if(arr[i]%2==0) {
      count++;
    }
  }
  cout << count << " valores pares" << endl;
}