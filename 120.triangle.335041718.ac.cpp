/*
 * @lc app=leetcode id=120 lang=cpp
 *
 * [120] Triangle
 */

// @lc code=start
class Solution {
public:
    int dfs(const int x, const int y, vector<vector<int>>& t,vector<vector<int>>&dp){
        if(dp[x][y] != INT_MIN)
            return dp[x][y];
        if(x == t.size()-1)
            return dp[x][y] = t[x][y];
        int v1 = dfs(x+1,y,t,dp);
        int v2 = dfs(x+1,y+1,t,dp);
        return dp[x][y] = t[x][y] + (v1 < v2 ? v1 : v2);
    }
    int minimumTotal(vector<vector<int>>& triangle) {
        if(triangle.empty())
            return 0;
        vector<int>temp(triangle.size(),INT_MIN);
        vector<vector<int>>dp(triangle.size(),temp);
        return dfs(0,0,triangle,dp);
    }
};
// @lc code=end
