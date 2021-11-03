/*
 * @lc app=leetcode id=1816 lang=cpp
 *
 * [1816] Truncate Sentence
 */

// @lc code=start
class Solution {
public:
    string truncateSentence(string s, int k) {
        int p = 0;
        int space = 0;
        while(p < s.size()){
            if(s[p] == ' ') {
                space++;
                if(space >= k)
                    break;
            }
            ++p;
        }
        return s.substr(0, p);
    }
};
// @lc code=end
