/*
 * @lc app=leetcode id=213 lang=cpp
 *
 * [213] House Robber II
 */

// @lc code=start
class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.size() == 1) return nums[0];
        int res = max(nums[0], nums[1]);
        vector<int>dp1(nums.size(), 0);
        vector<int>dp2(nums.size(), 0);
        dp1[0] = nums[0];
        dp1[1] = max(nums[0], nums[1]);
        dp2[0] = 0;
        dp2[1] = nums[1];
        for(int i = 2; i < nums.size() - 1; i++){
            dp1[i] = max(dp1[i-1], dp1[i-2] + nums[i]);
            res = max(res, dp1[i]);
        }
        for(int i = 2; i < nums.size(); i++){
            dp2[i] = max(dp2[i-1], dp2[i-2] + nums[i]);
            res = max(res, dp2[i]);
        }
        return res;
    }
};
// @lc code=end
