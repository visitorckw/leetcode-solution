/*
 * @lc app=leetcode id=1791 lang=cpp
 *
 * [1791] Find Center of Star Graph
 */

// @lc code=start
class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        unordered_set<int> table;
        for(auto e : edges){
            if(table.count(e[0])) return e[0];
            table.insert(e[0]);
            if(table.count(e[1])) return e[1];
            table.insert(e[1]);
        }
        return 0;
    }
};
// @lc code=end
