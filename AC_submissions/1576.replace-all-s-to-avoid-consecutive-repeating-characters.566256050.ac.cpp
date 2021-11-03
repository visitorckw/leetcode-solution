/*
 * @lc app=leetcode id=1576 lang=cpp
 *
 * [1576] Replace All ?'s to Avoid Consecutive Repeating Characters
 */

// @lc code=start
class Solution {
public:
    string modifyString(string s) {
        if(s.size() == 1)
            return s[0] == '?' ? "a" : s;
        if(s[0] == '?')
            s[0] = (s[1] == 'a' ? 'b' : 'a');
        if(s.back() == '?')
            s[s.size()-1] = (s[s.size()-2] == 'a' ? 'b' : 'a');
        for(int i = 1; i < s.size() - 1; i++){
            if(s[i] != '?') continue;
            if(s[i-1] != 'a' && s[i+1] != 'a') s[i] = 'a';
            else if(s[i-1] != 'b' && s[i+1] != 'b') s[i] = 'b';
            else s[i] = 'c';
        }
        return s;
    }
};
// @lc code=end
