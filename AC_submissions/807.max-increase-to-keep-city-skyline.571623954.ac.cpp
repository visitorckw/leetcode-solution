/*
 * @lc app=leetcode id=807 lang=cpp
 *
 * [807] Max Increase to Keep City Skyline
 */

// @lc code=start
class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        const int n = grid.size();
        vector<int> rowMax(n);
        vector<int> colMax(n);
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                rowMax[i] = max(rowMax[i], grid[i][j]);
                colMax[i] = max(colMax[i], grid[j][i]);
            }
        }
        int res = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                res += min(rowMax[i], colMax[j]) - grid[i][j];
            }
        }
        return res;
    }
};
// @lc code=end
