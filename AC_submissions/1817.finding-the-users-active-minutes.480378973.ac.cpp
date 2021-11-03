/*
 * @lc app=leetcode id=1817 lang=cpp
 *
 * [1817] Finding the Users Active Minutes
 */

// @lc code=start
class Solution {
public:
    vector<int> findingUsersActiveMinutes(vector<vector<int>>& logs, int k) {
        unordered_map<int,unordered_set<int>> table;
        for(auto log : logs){
            if(table[log[0]].count(log[1])) continue;
            table[log[0]].insert(log[1]);
        }
        vector<int>ans(k, 0);
        for(auto it : table){
            ans[it.second.size() - 1]++;
        }
        return ans;
    }
};
// @lc code=end
