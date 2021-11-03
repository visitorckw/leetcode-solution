/*
 * @lc app=leetcode id=64 lang=cpp
 *
 * [64] Minimum Path Sum
 */

// @lc code=start
class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        const int row = grid.size();
        const int col = grid[0].size();
        int d[row][col];
        d[0][0] = grid[0][0];
        for(int i = 1; i < row; i++)
            d[i][0] = d[i-1][0] + grid[i][0];
        for(int i = 1; i < col; i++)
            d[0][i] = d[0][i-1] + grid[0][i];
        for(int i = 1; i < row; i++)
            for(int j = 1; j < col; j++)
                d[i][j] = min(d[i-1][j], d[i][j-1]) + grid[i][j];
        return d[row-1][col-1];
    }
};
// @lc code=end
