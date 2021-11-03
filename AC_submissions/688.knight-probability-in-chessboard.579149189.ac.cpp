/*
 * @lc app=leetcode id=688 lang=cpp
 *
 * [688] Knight Probability in Chessboard
 */

// @lc code=start
class Solution {
public:
    double knightProbability(int n, int k, int row, int column) {
        vector<vector<double>>dp(n, vector<double>(n, 0.0));
        vector<vector<double>>tmp(n, vector<double>(n, 0.0));
        const int dir[8][2] = {{2,1}, {2,-1}, {-2,1}, {-2,-1}, {1,2}, {1,-2}, {-1,2}, {-1,-2}};
        dp[row][column] = 1.0;
        while(k--){
            for(int i = 0; i < n; i++)
                for(int j = 0; j < n; j++)
                    tmp[i][j] = 0;
            for(int i = 0; i < n; i++){
                for(int j = 0; j < n; j++){
                    for(int d = 0; d < 8; d++){
                        int x = i + dir[d][0];
                        int y = j + dir[d][1];
                        if(0 <= x && 0 <= y && x < n && y < n){
                            tmp[x][y] += dp[i][j] / 8.0;
                        }
                    }
                }
            }
            dp = tmp;
        }
        double res = 0.0;
        for(int i = 0; i < n; i++)
            for(int j = 0; j < n; j++)
                res += dp[i][j];
        return res;
    }
};
// @lc code=end
