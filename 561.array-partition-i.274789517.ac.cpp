/*
 * @lc app=leetcode id=561 lang=cpp
 *
 * [561] Array Partition I
 */

// @lc code=start
class Solution {
public:
    int ans = 0;
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i = 0;i < nums.size(); i += 2)
            ans += nums[i];
        return ans;
    }
};
// @lc code=end
