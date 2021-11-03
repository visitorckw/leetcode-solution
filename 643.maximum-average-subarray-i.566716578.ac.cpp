/*
 * @lc app=leetcode id=643 lang=cpp
 *
 * [643] Maximum Average Subarray I
 */

// @lc code=start
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int sum = 0, res = INT_MIN;
        for(int i = 0; i < k; i++)
            sum += nums[i];
        res = sum;
        for(int i = k; i < nums.size(); i++){
            sum += nums[i] - nums[i-k];
            res = max(res, sum);
        }
        return res * 1.0 / k;
    }
};
// @lc code=end
