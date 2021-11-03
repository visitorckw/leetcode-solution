/*
 * @lc app=leetcode id=91 lang=cpp
 *
 * [91] Decode Ways
 */

// @lc code=start
class Solution {
public:
    int numDecodings(string s) {
        if(s.empty() || s.front() == '0')
            return 0;
        int dp[s.size()+10]; 
        memset(dp,-1,sizeof(dp));
        dp[0] = dp[1] = 1;
        for(int i = 2; i < s.size()+1; i++) {
            if(s[i-1] == '0')
                dp[i] = 0;
            else
                dp[i] = dp[i-1];
            if(s[i-2] == '1' || (s[i-2] == '2' && s[i-1] <= '6'))
                dp[i] += dp[i-2];
        }
        return dp[s.size()];
    }
};
// @lc code=end
