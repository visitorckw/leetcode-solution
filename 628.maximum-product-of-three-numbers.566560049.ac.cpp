/*
 * @lc app=leetcode id=628 lang=cpp
 *
 * [628] Maximum Product of Three Numbers
 */

// @lc code=start
class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        const int size = nums.size();
        sort(nums.begin(), nums.end());
        return max(nums[size-1]*nums[size-2]*nums[size-3], nums[0]*nums[1]*nums[size-1]);
    }
};
// @lc code=end
