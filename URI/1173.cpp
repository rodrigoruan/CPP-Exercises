#include <iostream>

using namespace std;

int main()
{
  int a;
  cin >> a;
  for (int i = 0; i < 10; i++)
  {
    cout << "N[" << i << "] = " << a << endl;
    a *= 2;
  }
}