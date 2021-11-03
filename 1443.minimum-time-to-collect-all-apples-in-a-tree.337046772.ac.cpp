/*
 * @lc app=leetcode id=1443 lang=cpp
 *
 * [1443] Minimum Time to Collect All Apples in a Tree
 */

// @lc code=start
class Solution {
public:
    int ans = 0;
    bool dfs(vector<vector<int>>&g, vector<bool>& hasApple, vector<bool>visit, int v){
        visit[v] = true;
        bool flag = false;
        if(hasApple[v]) flag = true;
        for(auto c : g[v])
            if(!visit[c])
                flag = dfs(g,hasApple,visit,c) || flag;
        if(flag) ++ans;
        return flag;
        
    }
    int minTime(int n, vector<vector<int>>& edges, vector<bool>& hasApple) {
        vector<vector<int>>g(n);
        vector<bool>visit(n,0);
        int apple = 0;
        
        for(auto e : edges){
            g[e[0]].push_back(e[1]);
            g[e[1]].push_back(e[0]);
        }
        for(auto a : hasApple)
            if(a)
                apple++;
        dfs(g,hasApple,visit,0);
        if(!ans)
            return 0;
        return 2 * ans - 2;
    }
};
// @lc code=end
