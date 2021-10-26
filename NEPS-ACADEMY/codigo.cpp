#include <iostream>
#include <string>

using namespace std;

int main()
{
  int a, res=0;
  cin >> a;
  string v;

  for (int i = 0; i < a; i++)
  {
    int x;
    cin >> x;
    v += to_string(x);
  }

  for(int i = 0; i < v.size(); i++) {
    if(v[i] == '1' && v[i+1] == '0' && v[i+2] == '0') res++;
  }

  cout << res << endl;
}