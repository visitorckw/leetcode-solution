/*
 * @lc app=leetcode id=797 lang=cpp
 *
 * [797] All Paths From Source to Target
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>>ans;
    void dfs(vector<int>path, const int node, vector<vector<int>>&g){
        path.push_back(node);
        if(node == g.size() - 1){
            ans.push_back(path);
            return;
        }
        for(auto n : g[node])
            dfs(path,n,g);
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        dfs(vector<int>(),0,graph);
        return ans;
    }
};
// @lc code=end
