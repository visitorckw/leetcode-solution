/*
 * @lc app=leetcode id=1913 lang=cpp
 *
 * [1913] Maximum Product Difference Between Two Pairs
 */

// @lc code=start
class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        const int length = nums.size();
        return nums[length-1] * nums[length-2] - nums[1] * nums[0];
    }
};
// @lc code=end
