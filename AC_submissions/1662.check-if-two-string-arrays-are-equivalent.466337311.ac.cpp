/*
 * @lc app=leetcode id=1662 lang=cpp
 *
 * [1662] Check If Two String Arrays are Equivalent
 */

// @lc code=start
class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string s1, s2;
        for(auto s : word1)
            s1 += s;
        for(auto s: word2)
            s2 += s;
        return s1 == s2;
    }
};
// @lc code=end
