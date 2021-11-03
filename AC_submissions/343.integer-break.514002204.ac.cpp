/*
 * @lc app=leetcode id=343 lang=cpp
 *
 * [343] Integer Break
 */

// @lc code=start
class Solution {
public:
    int integerBreak(int n) {
        int* dp = new int[n+1];
        memset(dp, 0, sizeof(int) * (n+1));
        dp[0] = dp[1] = 0;
        dp[2] = 1;
        for(int i = 2; i <= n; i++){
            for(int j = 1; j < i; j++)
                dp[i] = max(dp[i], max(j * dp[i-j], j * (i-j)));
        }
        return dp[n];
    }
};
// @lc code=end
