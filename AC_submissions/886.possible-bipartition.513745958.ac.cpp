/*
 * @lc app=leetcode id=886 lang=cpp
 *
 * [886] Possible Bipartition
 */

// @lc code=start
class Solution {
public:
    void dfs(vector<vector<int>>&g, const int node, bool* visit, bool* color, const bool draw){
        if(visit[node]) return;
        visit[node] = true;
        color[node] = draw;
        for(auto child : g[node])
            dfs(g, child, visit, color, !draw);
    }
    bool possibleBipartition(int n, vector<vector<int>>& dislikes) {
        vector<vector<int>>g(n+1, vector<int>());
        for(auto edge : dislikes){
            g[edge[0]].push_back(edge[1]);
            g[edge[1]].push_back(edge[0]);
        }
        bool* visit = new bool[n+1];
        bool* color = new bool[n+1];
        // int* parent = new int[n+1];
        memset(color, 0, sizeof(bool) * (n+1));
        memset(visit, 0, sizeof(bool) * (n+1));
        queue<int>que;
        for(int i = 1; i <= n; i++){
            if(!visit[i])
                que.push(i);
            while(!que.empty()){
                int node = que.front();
                que.pop();
                visit[node] = true;
                for(auto child : g[node]){
                    if(visit[child]){
                        if(color[node] == color[child])
                            return false;
                    }
                    else{
                        que.push(child);
                        color[child] = !color[node];
                    }
                }
            }
        }
        return true;
    }
};
// @lc code=end
