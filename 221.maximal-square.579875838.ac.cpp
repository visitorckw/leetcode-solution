/*
 * @lc app=leetcode id=221 lang=cpp
 *
 * [221] Maximal Square
 */

// @lc code=start
class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        const int M = matrix.size();
        const int N = matrix[0].size();
        vector<vector<int>>dp(M, vector<int>(N, 0));
        int res = 0;
        for(int i = 0; i < M; i++){
            dp[i][0] = matrix[i][0] - '0';
            res = max(res, dp[i][0]);
        }
        for(int i = 0; i < N; i++){
            dp[0][i] = matrix[0][i] - '0';
            res = max(res, dp[0][i]);
        }
        for(int i = 1; i < M; i++){
            for(int j = 1; j < N; j++){
                if(matrix[i][j] == '0') dp[i][j] = 0;
                else dp[i][j] = min(dp[i-1][j], min(dp[i-1][j-1], dp[i][j-1])) + 1;
                res = max(res, dp[i][j]);
            }
        }
        return res * res;
    }
};
// @lc code=end
