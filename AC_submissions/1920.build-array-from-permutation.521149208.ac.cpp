/*
 * @lc app=leetcode id=1920 lang=cpp
 *
 * [1920] Build Array from Permutation
 */

// @lc code=start
class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int> ans(nums.size(), 0);
        for(int i = 0; i < nums.size(); i++)
            ans[i] = nums[nums[i]];
        return ans;
    }
};
// @lc code=end
