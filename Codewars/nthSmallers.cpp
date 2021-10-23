#include <vector>
#include <iostream>
#include <algorithm>
using namespace std ;

int nthSmallest (vector<int> arr ,int nSmallest)
{
  sort(begin(arr), end(arr));
  return arr[nSmallest-1];
}