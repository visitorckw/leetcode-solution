/*
 * @lc app=leetcode id=1784 lang=cpp
 *
 * [1784] Check if Binary String Has at Most One Segment of Ones
 */

// @lc code=start
class Solution {
public:
    bool checkOnesSegment(string s) {
        int i = 0;
        while(i < s.size() && s[i] == '1') ++i;
        while(i < s.size())
            if(s[i++] == '1')
                return false;
        return true;
    }
};
// @lc code=end
