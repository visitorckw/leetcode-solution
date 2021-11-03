/*
 * @lc app=leetcode id=322 lang=cpp
 *
 * [322] Coin Change
 */

// @lc code=start
class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        vector<int> dp(amount+1, -1);
        dp[0] = 0;
        for(int i = 1; i <= amount; i++){
            int ans = INT_MAX;
            for(auto coin : coins){
                if(i - coin >= 0 and dp[i-coin] != -1 and dp[i - coin] + 1 < ans)
                    ans = dp[i - coin] + 1;
            }
            if(ans != INT_MAX) dp[i] = ans;
        }
        return dp[amount];
    }
};
// @lc code=end
