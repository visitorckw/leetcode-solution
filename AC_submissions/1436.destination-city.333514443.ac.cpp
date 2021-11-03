/*
 * @lc app=leetcode id=1436 lang=cpp
 *
 * [1436] Destination City
 */

// @lc code=start
class Solution {
public:
    unordered_set<string>table;
    string destCity(vector<vector<string>>& paths) {
        for(auto p : paths)
            table.insert(p[1]);
        for(auto p : paths)
            if(table.count(p[0]))
                table.erase(p[0]);
        return *table.begin();
    }
};
// @lc code=end
