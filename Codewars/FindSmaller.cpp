#include <vector>
#include <iterator>

using namespace std;

int findSmallest(vector<int> list)
{
  int C = list[0];
  for (int i = 0; i < size(list); i++)
  {
    if (list[i] < C)
    {
      C = list[i];
    }
  }
  return C;
}