/*
 * @lc app=leetcode id=709 lang=cpp
 *
 * [709] To Lower Case
 */

// @lc code=start
class Solution {
public:
    string toLowerCase(string str) {
        for(int i = 0; i < str.size(); i++){
            str[i]=tolower(str[i]);
        }
        return str;
    }
};
// @lc code=end
