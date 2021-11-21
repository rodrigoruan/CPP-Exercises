#include <iostream>

using namespace std;

int main()
{
  int a;
  cin >> a;
  for (int i = 0; i < a; i++)
  {
    int c;
    cin >> c;
    for (int j = 0; j < c; j++)
    {
      int v;
      cin >> v;
      if (v == 1)
      {
        cout << "Rolien" << endl;
      }
      else if (v == 2)
      {
        cout << "Naej" << endl;
      }
      else if (v == 3)
      {
        cout << "Elehcim" << endl;
      }
      else
      {
        cout << "Odranoel" << endl;
      }
    }
  }
}