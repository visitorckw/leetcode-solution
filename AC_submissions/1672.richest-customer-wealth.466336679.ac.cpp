/*
 * @lc app=leetcode id=1672 lang=cpp
 *
 * [1672] Richest Customer Wealth
 */

// @lc code=start
class Solution {
public:
    int ans = INT_MIN;
    int maximumWealth(vector<vector<int>>& accounts) {
        for(auto v : accounts){
            int sum = 0;
            for(auto x : v){
                sum += x;
            }
            ans = max(ans, sum);
        }
        return ans;
    }
};
// @lc code=end
