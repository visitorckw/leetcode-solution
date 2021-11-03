/*
 * @lc app=leetcode id=509 lang=cpp
 *
 * [509] Fibonacci Number
 */

// @lc code=start
class Solution {
public:
    int fib(int N) {
        if(N<=1) return N;
        int dp[N+1];
        dp[0] = 0;
        dp[1] = 1;
        for(int i = 2; i <= N; i++) {
            dp[i] = dp[i-1] + dp[i-2];
        }
        return dp[N];
    }
};
// @lc code=end
