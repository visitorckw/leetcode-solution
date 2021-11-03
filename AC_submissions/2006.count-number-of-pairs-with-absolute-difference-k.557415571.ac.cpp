/*
 * @lc app=leetcode id=2006 lang=cpp
 *
 * [2006] Count Number of Pairs With Absolute Difference K
 */

// @lc code=start
class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        int res = 0;
        for(int i = 0; i < nums.size(); i++)
            for(int j = i + 1; j < nums.size(); j++)
                if(abs(nums[i] - nums[j]) == k)
                    ++res;
        return res;
    }
};
// @lc code=end
