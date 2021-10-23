#include <iostream>
#include <vector>
#include <iterator>

using namespace std;

int main()
{
  int a, b, c;
  cin >> a >> b >> c;
  int arr[] = {a, b, c};
  int arrsize = sizeof(arr) / sizeof(arr[0]);
  int one = 0;
  int zero = 0;

  for (int i = 0; i < arrsize; i++)
  {
    if (arr[i] == 1)
    {
      one++;
    }
    else
    {
      zero++;
    }
  }

  if (one == 1 && zero == 2)
  {
    if (a == 1)
      cout << "A" << endl;
    if (b == 1)
      cout << "B" << endl;
    if (c == 1)
      cout << "C" << endl;
    return 0;
  }

  if (zero == 1 && one == 2)
  {
    if (a == 0)
      cout << "A" << endl;
    if (b == 0)
      cout << "B" << endl;
    if (c == 0)
      cout << "C" << endl;
    return 0;
  }

  cout << "*" << endl;
}