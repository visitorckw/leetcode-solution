/*
 * @lc app=leetcode id=2057 lang=cpp
 *
 * [2057] Smallest Index With Equal Value
 */

// @lc code=start
class Solution {
public:
    int smallestEqual(vector<int>& nums) {
        for(int i = 0; i < nums.size(); i++)
            if(i % 10 == nums[i]) return i;
        return -1;
    }
};
// @lc code=end
