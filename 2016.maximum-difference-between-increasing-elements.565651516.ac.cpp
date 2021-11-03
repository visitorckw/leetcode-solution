/*
 * @lc app=leetcode id=2016 lang=cpp
 *
 * [2016] Maximum Difference Between Increasing Elements
 */

// @lc code=start
class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int mini = nums[0];
        int res = -1;
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] > mini) 
                res = max(res, nums[i] - mini);
            mini = min(mini, nums[i]);
        }
        return res;
    }
};
// @lc code=end
