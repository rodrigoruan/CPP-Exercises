class Solution
{
public:
  vector<int> targetIndices(vector<int> &nums, int target)
  {
    vector<int> arr = {};
    for (int i = 0; i < nums.size(); i++)
    {
      for (int j = i + 1; j < nums.size(); j++)
      {
        if (nums[i] > nums[j])
        {
          int temp = nums[i];
          nums[i] = nums[j];
          nums[j] = temp;
        }
      }
    }

    for (int i = 0; i < nums.size(); i++)
    {
      if (nums[i] == target)
        arr.push_back(i);
    }
    return arr;
  }
};