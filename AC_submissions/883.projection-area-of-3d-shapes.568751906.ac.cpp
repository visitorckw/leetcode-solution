/*
 * @lc app=leetcode id=883 lang=cpp
 *
 * [883] Projection Area of 3D Shapes
 */

// @lc code=start
class Solution {
public:
    int projectionArea(vector<vector<int>>& grid) {
        unordered_map<int, int>X, Y;
        const int m = grid.size();
        int res = 0;
        for(int i = 0; i < m; i++){
            for(int j = 0; j < grid[i].size(); j++){
                if(!grid[i][j]) continue;
                res++;
                if(grid[i][j] > X[i]){
                    res += grid[i][j] - X[i];
                    X[i] = grid[i][j];
                }
                if(grid[i][j] > Y[j]){
                    res += grid[i][j] - Y[j];
                    Y[j] = grid[i][j];
                }
            }
        }
        return res;
    }
};
// @lc code=end
