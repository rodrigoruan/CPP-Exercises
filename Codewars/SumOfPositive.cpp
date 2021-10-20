// You get an array of numbers, return the sum of all of the positives ones.

// Example [1,-4,7,12] => 1 + 7 + 12 = 20

// Note: if there is nothing to sum, the sum is default to 0.

#include <vector>
#include <iterator>

int positive_sum(const std::vector<int> arr)
{
  int C = 0;
  for (int i = 0; i < size(arr); i++)
  {
    if (arr[i] > 0)
    {
      C = C + arr[i];
    }
  }
  return C;
}