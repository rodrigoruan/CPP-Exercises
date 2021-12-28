#include <vector>

using namespace std;

vector<int> oddOnesOut(const vector<int> &numbers)
{
  map<int, int> obj = {};
  vector<int> arr = {};

  for (int c : numbers)
  {
    obj[c] ? obj[c] += 1 : obj[c] = 1;
  }

  for (int c : numbers)
  {
    if (obj[c] % 2 == 0)
      arr.push_back(c);
  }

  return arr;
}