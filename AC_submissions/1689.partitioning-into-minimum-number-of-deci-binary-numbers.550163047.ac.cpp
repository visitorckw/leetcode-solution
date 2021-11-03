/*
 * @lc app=leetcode id=1689 lang=cpp
 *
 * [1689] Partitioning Into Minimum Number Of Deci-Binary Numbers
 */

// @lc code=start
class Solution {
public:
    int minPartitions(string n) {
        int res = 0;
        for(auto ch : n){
            res = max(res, ch - '0');
        }
        return res;
    }
};
// @lc code=end
