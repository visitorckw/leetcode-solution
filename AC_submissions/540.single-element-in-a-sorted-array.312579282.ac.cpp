/*
 * @lc app=leetcode id=540 lang=cpp
 *
 * [540] Single Element in a Sorted Array
 */

// @lc code=start
class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int ans = 0;
        for(auto i : nums)
            ans ^= i;
        return ans;
    }
};
// @lc code=end
