/*
 * @lc app=leetcode id=495 lang=cpp
 *
 * [495] Teemo Attacking
 */

// @lc code=start
class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        // sort(timeSeries.begin(), timeSeries.end());
        int res = duration;
        for(int i = 1; i < timeSeries.size(); i++)
            res += min(duration, timeSeries[i] - timeSeries[i-1]);
        return res;
    }
};
// @lc code=end
