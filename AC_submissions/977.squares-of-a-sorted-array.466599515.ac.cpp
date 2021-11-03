/*
 * @lc app=leetcode id=977 lang=cpp
 *
 * [977] Squares of a Sorted Array
 */

// @lc code=start
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        for(auto& x : nums)
            x = x * x;
        sort(nums.begin(), nums.end());
        return nums;
    }
};
// @lc code=end
