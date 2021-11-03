/*
 * @lc app=leetcode id=2000 lang=cpp
 *
 * [2000] Reverse Prefix of Word
 */

// @lc code=start
class Solution {
public:
    string reversePrefix(string word, char ch) {
        int pos = word.find(ch);
        if(pos == string::npos) return word;
        reverse(word.begin(), word.begin() + pos + 1);
        return word;
    }
};
// @lc code=end
