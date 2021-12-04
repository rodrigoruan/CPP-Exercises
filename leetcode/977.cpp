class Solution
{
public:
  vector<int> sortedSquares(vector<int> &nums)
  {

    for (int i = 0; i < nums.size(); i++)
    {
      nums[i] = abs(pow(nums[i], 2));
    }

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

    return nums;
  }
};