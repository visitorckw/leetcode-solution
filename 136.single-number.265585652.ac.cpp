/*
 * @lc app=leetcode id=136 lang=cpp
 *
 * [136] Single Number
 */

// @lc code=start
class Solution {
public:
    
    int singleNumber(vector<int>& nums) {
        int x = nums[0];
        for(int i = 1; i < nums.size(); i++) x^=nums[i];
        return x;
    }
};
// @lc code=end
