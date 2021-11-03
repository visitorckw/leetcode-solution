/*
 * @lc app=leetcode id=892 lang=cpp
 *
 * [892] Surface Area of 3D Shapes
 */

// @lc code=start
class Solution {
public:
    
    int surfaceArea(vector<vector<int>>& grid) {
        const int n = grid.size();
        int res = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < grid[i].size(); j++){
                if(!grid[i][j]) continue;
                res += 2;
                res += 4 * grid[i][j];
                if(i) res -= min(grid[i][j], grid[i-1][j]) * 2;
                if(j) res -= min(grid[i][j], grid[i][j-1]) * 2;
            }
        }
        return res;
    }
};
// @lc code=end
