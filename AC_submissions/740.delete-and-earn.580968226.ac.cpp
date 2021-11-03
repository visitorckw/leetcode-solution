/*
 * @lc app=leetcode id=740 lang=cpp
 *
 * [740] Delete and Earn
 */

// @lc code=start
class Solution {
public:
    int ctr[10001] = {};
    int dp[10001] = {};
    int deleteAndEarn(vector<int>& nums) {
        int maxi = 0;
        for(auto x : nums){
             ctr[x]++;
            maxi = max(maxi, x);
        }
        dp[1] = ctr[1];
        for(int i = 2; i <= maxi; i++){
            dp[i] = max(dp[i-1], dp[i-2] + i * ctr[i]);
        }
        return dp[maxi];
    }
};
// @lc code=end
