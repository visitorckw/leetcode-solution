/*
 * @lc app=leetcode id=1646 lang=cpp
 *
 * [1646] Get Maximum in Generated Array
 */

// @lc code=start
class Solution {
public:
    int getMaximumGenerated(int n) {
        int max = 0;
        if(n <= 1) return n;
        int dp[110] = {};
        dp[0] = 0;
        dp[1] = 1;
        for(int i = 2; i <= n; i++){
            if(i & 1){
                dp[i] = dp[(i>>1)] + dp[(i>>1) + 1];
            }
            else dp[i] = dp[(i>>1)];
            if(dp[i] > max) max = dp[i];
        }
        return max;
    }
};
// @lc code=end
