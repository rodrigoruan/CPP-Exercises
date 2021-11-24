class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    int a = 0, b = 0;

      for(int i = 0; i < nums.size(); i ++) {
        if(a != 0 || b != 0) break;
        for(int j = 0; j < nums.size(); j ++) {
          if(i != j && nums[i] + nums[j] == target) {
            a = i, b = j;
            break;
          }
        }
      }

    return {a, b};
    }
};