/*
 * @lc app=leetcode id=695 lang=cpp
 *
 * [695] Max Area of Island
 */

// @lc code=start
class Solution {
public:
    int ans = 0;
    int ctr = 0;
    bool check(vector<vector<int>> &grid,vector<vector<bool>> &visit,const int x,const int y){
        if(0 > x || 0 > y || x >= grid.size() || y >= grid.front().size())
            return false;
        return grid[x][y] && !visit[x][y];
    }
    void dfs(vector<vector<int>> &grid, vector<vector<bool>> &visit, const int x, const int y) {
        ctr++;
        visit[x][y] = true;
        if(check(grid,visit,x+1,y))
            dfs(grid,visit,x+1,y);
        if(check(grid,visit,x-1,y))
            dfs(grid,visit,x-1,y);
        if(check(grid,visit,x,y+1))
            dfs(grid,visit,x,y+1);
        if(check(grid,visit,x,y-1))
            dfs(grid,visit,x,y-1);
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        if(grid.empty() || grid.front().empty())
            return 0;
        vector<bool>temp(grid.front().size(), false);
        vector<vector<bool>> visit(grid.size(), temp);
        for(int i = 0; i < grid.size(); i++) {
            for(int j = 0; j < grid.front().size(); j++) {
                ctr = 0;
                if(check(grid,visit,i,j))
                    dfs(grid,visit,i,j);
                ans = ctr > ans ? ctr : ans;
            }
        }
        return ans;
    }
};
// @lc code=end
