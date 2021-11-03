/*
 * @lc app=leetcode id=1992 lang=cpp
 *
 * [1992] Find All Groups of Farmland
 */

// @lc code=start
static const int dir[4][2] = {{0,1},{0,-1},{1,0},{-1,0}};
class Solution {
public:
    int maxX = 0, maxY = 0;
    void dfs(vector<vector<int>>& land,vector<vector<bool>>& visit, int x, int y){
        if(x < 0 || y < 0 || x >= land.size() || y >= land[0].size()) return;
        if(visit[x][y] || !land[x][y]) return;
        visit[x][y] = true;
        maxX = max(maxX, x);
        maxY = max(maxY, y);
        for(int i = 0; i < 4; i++)
            dfs(land,visit,x+dir[i][0],y+dir[i][1]);
    }
    vector<vector<int>> findFarmland(vector<vector<int>>& land) {
        vector<vector<int>>res;
        vector<vector<bool>>visit(land.size(), vector<bool>(land[0].size(), 0));
        for(int x = 0; x < land.size(); x++){
            for(int y = 0; y < land[0].size(); y++){
                if(land[x][y] && !visit[x][y]){
                    maxX = maxY = 0;
                    dfs(land,visit,x, y);
                    res.push_back({x,y,maxX,maxY});
                }
            }
        }
        return res;
    }
};
// @lc code=end
