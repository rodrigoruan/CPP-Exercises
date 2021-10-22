#include <iostream>

using namespace std;

int main() {
  double a, b, c, d, e, f;
  cin >> a >> b >> c >> d >> e >> f;
  int arr[] = {a, b, c, d, e, f};
  int pos = 0;
  
  for(int i = 0; i < 6; i++) {
    if(arr[i] > 0) pos++;
  }

  cout << pos << " valores positivos" << endl;
}