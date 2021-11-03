/*
 * @lc app=leetcode id=53 lang=cpp
 *
 * [53] Maximum Subarray
 */

// @lc code=start
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0;
        int ans = INT_MIN;
        for(int i = 0; i < nums.size(); i++)
        {
            sum + nums[i] > nums[i] ? sum = sum + nums[i] : sum = nums[i];
            if(sum > ans) ans = sum;
        }
        return ans;
    }
};
// @lc code=end
