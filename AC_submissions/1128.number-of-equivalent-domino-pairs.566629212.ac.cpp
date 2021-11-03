/*
 * @lc app=leetcode id=1128 lang=cpp
 *
 * [1128] Number of Equivalent Domino Pairs
 */

// @lc code=start
class Solution {
public:
    map<pair<int,int>, int> table;
    int numEquivDominoPairs(vector<vector<int>>& dominoes) {
        int res = 0;
        pair<int,int>p;
        for(auto dom : dominoes){
            p.first = dom[0];
            p.second = dom[1];
            if(p.first > p.second) swap(p.first, p.second);
            res += table[p];
            table[p]++;
        }
        return res;
    }
};
// @lc code=end
