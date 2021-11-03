/*
 * @lc app=leetcode id=785 lang=cpp
 *
 * [785] Is Graph Bipartite?
 */

// @lc code=start
class Solution {
public:
    unordered_map<int,int>depth;
    unordered_set<int> visit;
    bool dfs(vector<vector<int>>& graph, int node, int deep){
        if(visit.count(node)){
            return deep % 2 == depth[node] % 2;    
        }
        visit.insert(node);
        depth[node] = deep;
        for(auto child : graph[node]){
            if(!dfs(graph, child, deep+1))
                return false;
        }
        return true;
    }
    bool isBipartite(vector<vector<int>>& graph) {
        for(int i = 0; i < graph.size(); i++){
            if(!visit.count(i)){
                auto res = dfs(graph, i, 0);
                if(!res) return false;
            }
        }
        return true;
    }
};
// @lc code=end
