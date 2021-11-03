/*
 * @lc app=leetcode id=914 lang=cpp
 *
 * [914] X of a Kind in a Deck of Cards
 */

// @lc code=start
class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        unordered_map<int,int> table;
        for(auto x : deck)
            table[x]++;
        auto it = table.begin();
        auto res = it->second;
        it++;
        for(; it != table.end(); it++)
            res = gcd(res, it->second);
        return res >= 2;
    }
};
// @lc code=end
