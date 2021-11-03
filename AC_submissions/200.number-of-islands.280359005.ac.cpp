/*
 * @lc app=leetcode id=200 lang=cpp
 *
 * [200] Number of Islands
 */

// @lc code=start
class Solution {
public:
    int island = 0;
    int x_max, y_max;
    
    
    void dfs(const int x, const int y,vector<vector<bool>>& visit, vector<vector<char>>& grid)
    {
        if(x < 0 || y < 0 || x >= x_max || y >= y_max)
            return ;
        if(grid[x][y]=='0' || visit[x][y])
            return ;
        visit[x][y] = true;
        //cout << "visit " << x << ' ' << y << '\n';
        dfs(x+1 ,y, visit, grid);
        dfs(x-1 ,y, visit, grid);
        dfs(x, y+1, visit, grid);
        dfs(x, y-1, visit, grid);
        
    }
    
    int numIslands(vector<vector<char>>& grid)
    {
        if(grid.empty() || grid[0].empty())
            return 0;
        x_max = grid.size();
        y_max = grid[0].size();
        vector<vector<bool>>visit;
        for(int i = 0; i < grid.size(); i++)
        {
            vector<bool>temp;
            for(int j = 0; j < grid[0].size(); j++)
            {
                temp.push_back(false);
            }
            visit.push_back(temp);
        }
        for(int i = 0; i < grid.size(); i++)
        {
            for(int j = 0; j < grid[0].size(); j++)
            {
                if(grid[i][j]=='1' && !visit[i][j])
                {
                    island++;
                    dfs(i, j, visit, grid);
                }
            }
        }
        return island;
    }
};
// @lc code=end
