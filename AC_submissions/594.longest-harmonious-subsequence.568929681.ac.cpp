/*
 * @lc app=leetcode id=594 lang=cpp
 *
 * [594] Longest Harmonious Subsequence
 */

// @lc code=start
class Solution {
public:
    int findLHS(vector<int>& nums) {
        int res = 0;
        unordered_map<int, int> table;
        for(auto x : nums){
            table[x]++;
            if(table[x-1]) res = max(res, table[x-1] + table[x]);
            if(table[x+1]) res = max(res, table[x+1] + table[x]);
        }
        return res;
    }
};
// @lc code=end
