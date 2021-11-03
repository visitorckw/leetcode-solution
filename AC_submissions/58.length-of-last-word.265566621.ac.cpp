/*
 * @lc app=leetcode id=58 lang=cpp
 *
 * [58] Length of Last Word
 */

// @lc code=start
class Solution {
public:
    int lengthOfLastWord(string s) {
        int crt = 0;
        int i = s.size()-1;
        while(s[i]==' ') i--;
        for(; i >= 0; i--) {
            if(s[i] != ' ') crt++;
            else break;
        }
        return crt;
    }
};
// @lc code=end
