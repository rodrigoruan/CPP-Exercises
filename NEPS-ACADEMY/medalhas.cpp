#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
  int a, b, c;

  cin >> a >> b >> c;
  int arr[] = {a, b, c};
  sort(begin(arr), end(arr));

  if (a == arr[0]) {
    cout << 1 << endl;
  } else if (b == arr[0]) {
    cout << 2 << endl;
  } else {
    cout << 3 << endl;
  }

  if (a == arr[1]) {
    cout << 1 << endl;
  } else if (b == arr[1]) {
    cout << 2 << endl;
  } else {
    cout << 3 << endl;
  }

  if (a == arr[2]) {
    cout << 1 << endl;
  } else if (b == arr[2]) {
    cout << 2 << endl;
  } else {
    cout << 3 << endl;
  }
}