/*
 * @lc app=leetcode id=119 lang=cpp
 *
 * [119] Pascal's Triangle II
 */

// @lc code=start
class Solution {
public:
    int dp[40][40];
    int combine(const int n ,const int k) {
        if(dp[n][k])
            return dp[n][k];
        if(!k || n == k)
            return 1;
        return dp[n][k] = combine(n-1, k-1) + combine(n-1, k);
    }
    vector<int> getRow(int rowIndex) {
        if(!rowIndex)
            return vector<int>(1,1);
        vector<int>ans;
        ans.push_back(1);
        for(int i = 1; i < rowIndex; i++)  
            ans.push_back(combine(rowIndex,i));
        ans.push_back(1);
        return ans;
    }
};
// @lc code=end
