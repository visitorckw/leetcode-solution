/*
 * @lc app=leetcode id=1557 lang=cpp
 *
 * [1557] Minimum Number of Vertices to Reach All Nodes
 */

// @lc code=start
class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        vector<int>res;
        vector<bool>hasParent(n, false);
        for(auto e : edges)
            hasParent[e[1]] = true;
        for(int i = 0; i < n; i++)
            if(!hasParent[i])
                res.push_back(i);
        return res;
    }
};
// @lc code=end
