/*
 * @lc app=leetcode id=1967 lang=cpp
 *
 * [1967] Number of Strings That Appear as Substrings in Word
 */

// @lc code=start
class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        int ctr = 0;
        for(auto str : patterns)
            if(word.find(str) != string::npos)
                ++ctr;
        return ctr;
    }
};
// @lc code=end
