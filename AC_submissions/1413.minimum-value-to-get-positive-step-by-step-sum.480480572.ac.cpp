/*
 * @lc app=leetcode id=1413 lang=cpp
 *
 * [1413] Minimum Value to Get Positive Step by Step Sum
 */

// @lc code=start
class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int min = INT_MAX;
        int sum = 0;
        for(auto x : nums){
            sum += x;
            min = min > sum ? sum : min;
        }
        return 1 <= min ? 1 : 1 - min;
    }
};
// @lc code=end
