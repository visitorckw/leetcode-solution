/*
 * @lc app=leetcode id=1219 lang=cpp
 *
 * [1219] Path with Maximum Gold
 */

// @lc code=start
class Solution {
public:
    int dfs(int x, int y, vector<vector<int>>&g, vector<vector<bool>>&v){
        if(x < 0 or y < 0 or x >= g.size() or y >= g[0].size()) return 0;
        if(!g[x][y] or v[x][y]) return 0;
        v[x][y] = true;
        int a = dfs(x+1,y,g,v);
        int big = a;
        int b = dfs(x-1,y,g,v);
        if(b > a) big = b;
        int c = dfs(x,y+1,g,v);
        if(c > big) big = c;
        int d = dfs(x,y-1,g,v);
        if(d > big) big = d;
        v[x][y] = false;
        return g[x][y] + big;
    }
    int getMaximumGold(vector<vector<int>>& grid) {
        int ans = 0;
        vector<vector<bool>> visit(grid.size(),vector<bool>(grid[0].size(),false));
        for(int x = 0; x < grid.size(); x++){
            for(int y = 0; y < grid[0].size(); y++){
                if(grid[x][y]) ans = max(ans,dfs(x,y,grid,visit));
            }
        }
        return ans;
    }
};
// @lc code=end
