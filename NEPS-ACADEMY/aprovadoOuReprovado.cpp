#include <iostream>
using namespace std;

int main()
{
  int n, k, feedback;
  cin >> n;
  while (n--)
  {
    cin >> k;
    while (k--)
    {
      cin >> feedback;
      switch (feedback)
      {
      case 1:
        cout << "Rolien" << endl;
        break;
      case 2:
        cout << "Naej" << endl;
        break;
      case 3:
        cout << "Elehcim" << endl;
        break;
      case 4:
        cout << "Odranoel" << endl;
        break;
      }
    }
  }

  return 0;
}