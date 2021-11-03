/*
 * @lc app=leetcode id=1832 lang=cpp
 *
 * [1832] Check if the Sentence Is Pangram
 */

// @lc code=start
class Solution {
public:
    bool checkIfPangram(string sentence) {
        bool check[26] = {};
        for(auto ch : sentence)
            check[ch - 'a'] = true;
        for(auto x : check)
            if(!x) return false;
        return true;
    }
};
// @lc code=end
