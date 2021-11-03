/*
 * @lc app=leetcode id=447 lang=cpp
 *
 * [447] Number of Boomerangs
 */

// @lc code=start
class Solution {
public:
    int res = 0;
    unordered_map<int,int>table;
    int numberOfBoomerangs(vector<vector<int>>& points) {
        for(auto x : points){
            table.clear();
            for(auto y : points){
                const int d = pow(x[0]-y[0],2) + pow(x[1]-y[1],2);
                table[d]++;
            }
            for(auto m : table)
            res += m.second * (m.second - 1);
        }
        return res;
    }
        
};
// @lc code=end
