/*
 * @lc app=leetcode id=1402 lang=cpp
 *
 * [1402] Reducing Dishes
 */

// @lc code=start
class Solution {
public:
    int maxSatisfaction(vector<int>& satisfaction) {
        int res = 0;
        vector<int> dp(satisfaction.size(), 0);
        vector<int>prefix(satisfaction.size(), 0);
        sort(satisfaction.begin(), satisfaction.end(), greater<int>());
        prefix[0] = satisfaction[0];
        for(int i = 1; i < prefix.size(); i++)
            prefix[i] = prefix[i-1] + satisfaction[i];
        dp[0] = satisfaction[0];
        for(int i = 1; i < dp.size(); i++){
            dp[i] = dp[i-1] + prefix[i-1] + satisfaction[i];
            res = max(res, dp[i]);
        }
        return res;
    }
};
// @lc code=end
