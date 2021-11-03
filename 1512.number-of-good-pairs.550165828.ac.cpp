/*
 * @lc app=leetcode id=1512 lang=cpp
 *
 * [1512] Number of Good Pairs
 */

// @lc code=start
class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int res = 0;
        unordered_map<int, int> table;
        for(auto x : nums)
            table[x]++;
        for(auto it : table){
            if(it.second < 2) continue;
            res += it.second * (it.second - 1) / 2;
        }
        return res;
    }
};
// @lc code=end
