/*
 * @lc app=leetcode id=207 lang=cpp
 *
 * [207] Course Schedule
 */

// @lc code=start
class Solution {
public:
    vector<bool> dp;
    vector<int>list;
    bool dfs(int node, vector<vector<int>>& graph, vector<bool> &visit){
        if(dp[node]) return true;
        // dp[node] = true;
        list.push_back(node);
        // cout << "node" << node << '\n';
        if(visit[node]) {
            // cout << "return false\n";
            return false;
        }
        visit[node] = true;
        for(auto child : graph[node]){
            if(!dfs(child, graph, visit))
                return false;
        }
        visit[node] = false;
        return true;
    }
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        dp = vector<bool>(numCourses, false);
        vector<vector<int>> graph(numCourses, vector<int>());
        vector<bool> visit(numCourses, false);
        for(auto edge : prerequisites){
            graph[edge[0]].push_back(edge[1]);
        }
        for(int i = 0; i < numCourses; i++){
            // cout << "i = " << i << '\n';
            visit = vector<bool>(numCourses, false);
            if(!dp[i] and !dfs(i, graph, visit))
                return false;
            for(auto x : list)
                dp[x] = true;
            list.clear();
        }
        return true;
    }
};
// @lc code=end
