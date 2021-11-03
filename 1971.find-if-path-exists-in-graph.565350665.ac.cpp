/*
 * @lc app=leetcode id=1971 lang=cpp
 *
 * [1971] Find if Path Exists in Graph
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>>graph;
    vector<bool>visit;
    
    bool validPath(int n, vector<vector<int>>& edges, int start, int end) {
        graph = vector<vector<int>>(n);
        visit = vector<bool>(n);
        for(auto e : edges){
            graph[e[0]].push_back(e[1]);
            graph[e[1]].push_back(e[0]);
        }
        stack<int> st;
        st.push(start);
        while(!st.empty()){
            const int node = st.top();
            st.pop();
            visit[node] = true;
            if(node == end) return true;
            for(auto x : graph[node]){
                if(visit[x]) continue;
                st.push(x);
            }
        }
        return false;
    }
};
// @lc code=end
