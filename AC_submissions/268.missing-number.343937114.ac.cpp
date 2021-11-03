/*
 * @lc app=leetcode id=268 lang=cpp
 *
 * [268] Missing Number
 */

// @lc code=start
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int num = nums.size();
        for(int i = 0; i < nums.size(); ++i)
            num ^= (nums[i] ^ i);
        return num;
    }
};
// @lc code=end
