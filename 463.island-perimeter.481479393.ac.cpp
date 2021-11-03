/*
 * @lc app=leetcode id=463 lang=cpp
 *
 * [463] Island Perimeter
 */

// @lc code=start
class Solution {
public:
    int getVal(vector<vector<int>>& grid, const int &x, const int &y){
        if(x < 0 or y < 0 or x >= grid.size() or y >= grid[0].size())
            return 0;
        return grid[x][y];
    }
    int islandPerimeter(vector<vector<int>>& grid) {
        int ans = 0;
        for(int x = 0; x < grid.size(); x++){
            for(int y = 0; y < grid[0].size(); y++){
                if(!grid[x][y]) continue;
                if(!getVal(grid, x-1, y)) ++ans;
                if(!getVal(grid, x+1, y)) ++ans;
                if(!getVal(grid, x, y-1)) ++ans;
                if(!getVal(grid, x, y+1)) ++ans;
            }
        }
        return ans;
    }
};
// @lc code=end
