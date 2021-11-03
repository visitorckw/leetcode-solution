/*
 * @lc app=leetcode id=1800 lang=cpp
 *
 * [1800] Maximum Ascending Subarray Sum
 */

// @lc code=start
class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int res = INT_MIN;
        for(auto x : nums)
            res = max(x, res);
        for(int i = 0; i < nums.size() - 1; i++){
            if(nums[i] < nums[i+1]){
                int sum = nums[i] + nums[i+1];
                for(int j = i + 2; j < nums.size(); j++){
                    if(nums[j-1] >= nums[j])
                        break;
                    sum += nums[j];
                }
                res = max(res, sum);
            }
        }
        return res;
    }
};
// @lc code=end
