/*
 * @lc app=leetcode id=1462 lang=cpp
 *
 * [1462] Course Schedule IV
 */

// @lc code=start
class Solution {
public:
    bool dfs(int n , vector<vector<int>>&g, int find, vector<bool>&visit){
        if(n == find) return true;
        visit[n] = true;
        for(auto c : g[n]){
            if(visit[c]) continue;
            if(dfs(c,g,find,visit))
                return true;
        }
        return false;
    }
    vector<bool> checkIfPrerequisite(int n, vector<vector<int>>& prerequisites, vector<vector<int>>& queries) {
        vector<vector<int>> g(n);
        for(auto adj : prerequisites)
            g[adj[0]].push_back(adj[1]);
        bool A[n][n];
        /*for(int i = 0; i <n; ++i){
            for(int j = 0; j < n; ++j){
                vector<bool>visit(n,false);
                A[i][j] = dfs(i,g,j,visit);
            }
        }*/
        
        vector<bool>ans;
        for(auto q : queries){
            vector<bool>visit(n,false);
            ans.push_back(dfs(q[0],g,q[1],visit));
        }
        
        return ans;
    }
};
// @lc code=end
