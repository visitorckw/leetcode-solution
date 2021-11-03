/*
 * @lc app=leetcode id=1877 lang=cpp
 *
 * [1877] Minimize Maximum Pair Sum in Array
 */

// @lc code=start
class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int res = INT_MIN;
        for(int i = 0; i < nums.size() / 2; i++){
            res = max(res, nums[i] + nums[nums.size()-1-i]);
        }
        return res;
    }
};
// @lc code=end
