/*
 * @lc app=leetcode id=961 lang=cpp
 *
 * [961] N-Repeated Element in Size 2N Array
 */

// @lc code=start
class Solution {
public:
    unordered_set<int> table;
    int repeatedNTimes(vector<int>& A) {
        for(auto x : A){
            if(table.count(x)) return x;
            table.insert(x);
        }
        return 0;
    }
};
// @lc code=end
