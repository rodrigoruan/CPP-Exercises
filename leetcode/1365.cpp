class Solution
{
public:
  vector<int> smallerNumbersThanCurrent(vector<int> &nums)
  {
    vector<int> arr = {};

    for (int i = 0; i < nums.size(); i++)
    {
      int res = 0;
      for (int j = 0; j < nums.size(); j++)
      {
        if (nums[i] > nums[j])
          res++;
      }
      arr.push_back(res);
    }
    return arr;
  }
};