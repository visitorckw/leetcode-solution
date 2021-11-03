/*
 * @lc app=leetcode id=1260 lang=cpp
 *
 * [1260] Shift 2D Grid
 */

// @lc code=start
class Solution {
public:
    void shift(vector<vector<int>>&grid){
        int tmp = grid[grid.size()-1][grid[0].size()-1];
        for(int i = 0; i < grid.size(); i++)
            for(int j = 0; j < grid[0].size(); j++)
                swap(tmp, grid[i][j]);
    }
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        for(int i = 0; i < k; i++)
            shift(grid);
        return grid;
    }
};
// @lc code=end
