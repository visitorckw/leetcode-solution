/*
 * @lc app=leetcode id=118 lang=cpp
 *
 * [118] Pascal's Triangle
 */

// @lc code=start
class Solution {
public:
    int dp[1000][1000];
    int combine(const int n, const int k) {
        if(dp[n][k])
            return dp[n][k];
        if(!k || n == k)
            return dp[n][k] = 1;
        return dp[n][k] = combine(n-1,k-1) + combine(n-1,k);
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans;
        ans.reserve(33);
        for(int i = 0; i < numRows; i++) {
            vector<int>temp;
            temp.reserve(33);
            for(int j = 0; j <= i; j++) {
                temp.push_back(combine(i,j));
            }
            ans.push_back(temp);
        }
        return ans;
    }
};
// @lc code=end
