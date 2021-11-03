/*
 * @lc app=leetcode id=310 lang=cpp
 *
 * [310] Minimum Height Trees
 */

// @lc code=start
class Solution {
public:
    vector<int> ans;
    int minH = INT_MAX;
    vector<int>parent;
    vector<int>h1, h2;
    vector<int>c1, c2;
    void record(int node, int source, int height){
        if(height < h2[node]) return;
        if(height > h1[node]){
            h2[node] = h1[node];
            c2[node] = c1[node];
            h1[node] = height;
            c1[node] = source;
        }
        else{
            h2[node] = height;
            c2[node] = source;
        }
    }
    void dfs1(int node, vector<vector<int>>&graph){
        for(auto child : graph[node]){
            if(child == parent[node]) continue;
            parent[child] = node;
            dfs1(child, graph);
            // h[node] = max(h[node], h[child] + 1);
            record(node, child, h1[child] + 1);
        }
    }
    void dfs2(int node, vector<vector<int>>&graph){
        if(parent[node] != -1){
            // h[node] = max(h[node], h[parent[node]] + 1);
            if(c1[parent[node]] == node){
                record(node,parent[node], h2[parent[node]] + 1);
            }
            else
                record(node,parent[node], h1[parent[node]] + 1);
        }
        for(auto child : graph[node]){
            if(child == parent[node]) continue;
            dfs2(child, graph);
        }
    }
    vector<int> findMinHeightTrees(int n, vector<vector<int>>& edges) {
        if(n == 1) return vector<int>(1,0);
        vector<vector<int>> graph(n);
        for(auto e : edges){
            graph[e[0]].push_back(e[1]);
            graph[e[1]].push_back(e[0]);
        }
        parent = c1 = c2 = vector<int>(n,-1);
        h1 = h2 = vector<int>(n,0);
        dfs1(0,graph);
        dfs2(0,graph);
        int radious = INT_MAX;
        for(auto x : h1) radious = min(x, radious);
        for(int i = 0; i < n; i++)
            if(h1[i] == radious)
                ans.push_back(i);
        return ans;
    }
};
// @lc code=end
