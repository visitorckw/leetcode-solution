/*
 * @lc app=leetcode id=1984 lang=cpp
 *
 * [1984] Minimum Difference Between Highest and Lowest of K Scores
 */

// @lc code=start
class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int res = INT_MAX;
        for(int i = 0; i + k - 1 < nums.size(); i++)
            res = min(res, nums[i+k-1] - nums[i]);
        return res;
    }
};
// @lc code=end
